#include<iostream>
#include"Sales_item.h"

using std::cout;
using std::cin;
using std::cerr;
using std::endl;
using std::string;

int main(int argc, char **argv){
    if(argc != 2){
        cerr << "You must run this programme with two arguments!" << endl;
        cerr << "You give " << argc << " argument(s)!" << endl;
        exit(1);
    }

    if(string(argv[1]) == "7_2"){
        Sales_item item1("1111-1280", 10, 100, 10);
        Sales_item item2("1111-1280", 5, 60, 12);

        item1 = item1.combine(item2);

        cout << "ISBN: " << item1.getISBN() << endl;
        cout << "Sales: " << item1.getSales() << endl;
        cout << "Revenue: " << item1.getRevenue() << endl;
        cout << "Average Price: " << item1.getAvgPrice() << endl;
    }

    if(string(argv[1]) == "7_8"){
        Sales_item item1("1111-1280", 10, 100, 10);
        Sales_item item2("1111-1280", 10, 100, 10);

        read(cin, item2);
        print(cout, item2);
        cout << endl;
        Sales_item item3 = add(item1, item2);
        print(cout, item3);
        cout << endl;
    }
}
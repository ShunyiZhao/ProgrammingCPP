#include<iostream>
#include<string>
#include"Person.h"

using std::cout;
using std::cin;
using std::string;
using std::cerr;
using std::endl;

template <typename T>
bool compare(T var1, T var2);

int main(int argc, char **argv){
    if (argc != 1){
        cerr << "You can not use more than 1 argument in this programme!" << endl;
        cerr << "Programme Name: " << argv[0] << endl;
        exit(1);
    }

    Person p1;
    Person p2("Li Lei", "Beijing");
    print(cout, p2);
    cout << endl;
    Person p3(cin);
    print(cout, p3);
    cout << endl;
}
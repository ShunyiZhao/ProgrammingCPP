#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(int argc, char **argv){
    if(argc != 1){
        cout << "only 1 argument" << endl;
        exit(1);
    }
    string strRes, strTem;

    while(cin >> strTem){
        strRes += strTem;
    }
    cout << strRes << endl;

    return 0;
}
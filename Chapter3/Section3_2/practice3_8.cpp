#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(int argc, char **argv){
    string strTem("Hello, world!");
    for(decltype(strTem.size()) i = 0; i < strTem.size(); i++){
        strTem[i] = 'X';
    }
    cout << strTem << endl;

    decltype(strTem.size()) i2 = 0;
    while(i2 < strTem.size()){
        strTem[i2] = 'C';
        i2++;
    }
    cout << strTem << endl;
    return 0;
}
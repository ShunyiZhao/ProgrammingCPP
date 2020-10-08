#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(int argc, char **argv){
    string strTem("Hello, World!");
    for(char &c : strTem){
        c = 'X';
    }
    cout << strTem << endl;
    return 0;
}
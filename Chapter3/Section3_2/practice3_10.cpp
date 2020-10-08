#include<iostream>
#include<string>
#include<cctype>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(int argc, char **argv){
    string str1, str2;
    cout << "Input a string" << endl;
    cin >> str1;

    for(auto c : str1){
        cout << c << endl;
        if(!ispunct(c)){
            str2 += string(1, c);
        }
    }
    cout << str2 << endl;

    return 0;
}
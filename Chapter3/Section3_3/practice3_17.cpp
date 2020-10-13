#include<iostream>
#include<string>
#include<vector>
#include<cctype>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main(int argc, char **argv){
    string strTem;
    vector<string> vecWords;

    while(cin >> strTem){
        vecWords.push_back(strTem);
    }

    for(decltype(vecWords.size()) i = 0; i < vecWords.size(); i++){
        string strTem2 = vecWords[i];
        for(auto &c : strTem2){
            if(isalpha(c)){
                c = toupper(c);
            }
        }
        cout << strTem2 << endl;
    }

    return 0;
}
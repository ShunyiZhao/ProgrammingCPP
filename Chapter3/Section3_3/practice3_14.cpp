#include<iostream>
#include<string>
#include<vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main(int argc, char **argv){
    vector<int> ivec;
    int iTem;
    while(cin >> iTem){
        ivec.push_back(iTem);
    }

    for (auto i : ivec) {
        cout << i << endl;
    }

    vector<string> strVec;
    string strTem;
    while(cin >> strTem){
        strVec.push_back(strTem);
    }

    return 0;
}
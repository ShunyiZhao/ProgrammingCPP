#include<iostream>
#include<string>
#include<vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

int main(int argc, char **argv){
    vector<int> vecNumbers;
    int nTem;
    while(cin >> nTem){
        vecNumbers.push_back(nTem);
    }

    cout << endl;
    for(decltype(vecNumbers.size()) i = 0; i < vecNumbers.size() - 1; i++){
        cout << vecNumbers[i] + vecNumbers[i + 1] << endl;
    }

    cout << endl;
    for(decltype(vecNumbers.size()) i = 0; i < vecNumbers.size() / 2 + vecNumbers.size() % 2; i++){
        cout << vecNumbers[i] + vecNumbers[vecNumbers.size() - i - 1] << endl;
    }
    return 0;
}
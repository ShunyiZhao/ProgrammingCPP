#include<iostream>
#include<vector>

using std::cout;
using std::cin;
using std::vector;
using std::endl;

int main(int argc, char **argv){
    vector<int> vecNumbers;
    int nTemNumber;
    while(cin >> nTemNumber){
        vecNumbers.push_back(nTemNumber);
    }

    for(vector<int>::iterator iter = vecNumbers.begin(); iter != vecNumbers.end() - 1; iter++){
        cout << *iter + *(iter + 1) << endl;
    }

    cout << endl;
    vector<int>::iterator head = vecNumbers.begin(), tail = vecNumbers.end() - 1;
    for(int i = 0; i < vecNumbers.size() / 2 + vecNumbers.size() % 2; i++){
        cout<< *(head + i) + *(tail - i) << endl;
    }

    return 0;
}
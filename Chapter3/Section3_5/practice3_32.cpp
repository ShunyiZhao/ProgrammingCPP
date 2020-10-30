#include<iostream>
#include<vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main(int argc, char **argv){
    if(argc != 1){
        cout << "ERROR:" << argv[0] <<endl;
        exit(1);
    }

    vector<int> vecNumbers;
    constexpr int nSize = 10;

    for(int i = 0; i < nSize; i++){
        vecNumbers.push_back(i);
    }

    for(auto iter = vecNumbers.begin(); iter != vecNumbers.end(); iter++){
        cout << *iter << endl;
    }

    return 0;
}
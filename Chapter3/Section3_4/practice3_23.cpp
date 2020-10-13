#include<iostream>
#include<vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main(int argc, char **argv){
    vector<int> vecNumbers;
    for(int i = 0; i < 10; i++){
        vecNumbers.push_back(i * 2);
    }
    for(vector<int>::iterator iter = vecNumbers.begin(); iter != vecNumbers.end(); iter++){
        *iter = *iter * 2;
    }
    for(vector<int>::iterator iter = vecNumbers.begin(); iter != vecNumbers.end(); iter++){
        cout << *iter << endl;
    }

    return 0;
}
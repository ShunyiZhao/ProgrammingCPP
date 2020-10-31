#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main(int argc, char **argv){

    constexpr unsigned nSize = 10;
    float arrfNumbers[nSize];

    for(int i = 0; i < nSize; i++){
        arrfNumbers[i] = i;
    }

    for(int i = 0; i < nSize; i++){
        cout << arrfNumbers[i] << endl;
    }

    float *headArr = arrfNumbers;
    for(int i = 0; i < nSize; i++){
        *(headArr + i) = 0;
    }

    cout << endl;

    for(int i = 0; i < nSize; i++){
        cout << arrfNumbers[i] << endl;
    }

    return 0;
}
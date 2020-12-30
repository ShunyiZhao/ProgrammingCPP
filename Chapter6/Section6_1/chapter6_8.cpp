#include<iostream>
#include"chapter6_8.h"

using std::cout;
using std::endl;

int fact(int nInput){

    cout << "In my own function" << endl;

    int nResult = 1;

    for (int i = nInput; i > 0; i--){
        nResult *= i;
    }

    return nResult;
}
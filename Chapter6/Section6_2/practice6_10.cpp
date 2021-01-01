#include<iostream>

using std::cout;
using std::endl;
using std::cerr;

void swapValues(int *nNumber1, int *nNumber2);

int main(int argc, char **argv){

    int n1 = 10, n2 = 20;
    int *p1 = &n1, *p2 = &n2;

    cout<< n2 << "   " << n1 << endl;

    return 0;
}

void swapValues(int *nNumber1, int *nNumber2){
    int nTem = *nNumber1;
    *nNumber1 = *nNumber2;
    *nNumber2 = nTem;
}
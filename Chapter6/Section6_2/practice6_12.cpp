#include<iostream>

using std::cout;
using std::endl;
using std::cerr;

void swapValues(int &nInput1, int &nInput2);

int main(){
    int n1 = 10, n2 = 23;
    swapValues(n1, n2);

    cout << n1 << "   " << n2 << endl;

    return 0;
}

void swapValues(int &nInput1, int &nInput2){
    int nTem = nInput1;
    nInput1 = nInput2;
    nInput2 = nTem;
}
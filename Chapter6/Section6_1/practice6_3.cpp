#include<iostream>

using std::cout;
using std::cin;
using std::cerr;
using std::endl;

int fact(int nInput);

int main(int argc, char **argv) {

    if (argc != 1){
        cerr << "Pragramme " << argv[0] << " has more than one arguments!" << endl;
        exit(1);
    }

    cout << fact(5) << endl;

    return 0;
}

int fact(int nInput){
    int nResult = 1;

    for(int i = nInput; i >= 1; i--){
        nResult *= i;
    }

    return nResult;
}
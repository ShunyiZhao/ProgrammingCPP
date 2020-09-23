#include<iostream>

using namespace std;

int main(int argc, char **argv){

    // block 1

    cout << "\'a\':   " << 'a' << endl; // char a
    cout << "L\'a\':   " << L'a' << endl; // long char a
    cout << "\"a\":   " << "a" << endl;
    cout << "L\"a\":   " << L"a" << endl;

    // block 2

    cout << "10:   " << 10 << endl;
    cout << "10u:   " << 10u << endl;
    cout << "10L:   " << 10L << endl;
    cout << "10uL:   " << 10uL << endl;
    cout << "012:   " << 012 << endl;
    cout << "0xC:   " << 0xC << endl;

    // block 3

    cout << "3.14:   " << 3.14 << endl;
    cout << "3.14f:   " << 3.14f << endl;
    cout << "3.14L:   " << 3.14L << endl;

    // block 4

    cout << "10:   " << 10 << endl;
    cout << "10u:   " << 10u << endl;
    cout << "10.:   " << 10. << endl;
    cout << "10e-2:   " << 10e-2 << endl;


    return 0;
}
#include<iostream>

using namespace std;

int main(int argc, char **argv){
    int i = 10, i2 = 80;
    int *p = &i;

    cout << *p << endl;

    *p = 50;

    cout << *p << endl;

    p = &i2;

    cout << *p << endl;

    return 0;
}
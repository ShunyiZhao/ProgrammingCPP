#include<iostream>

using namespace std;

int main(int argc, char **argv){
    //int i = -1, &r = 0; // illegal
    int i2 = 10;
    int *const p2 = &i2;

    const int i = -1, &r = 0;
    const int *const p3 = &i2;

    const int *p4 = &i2;

    return 0;
}
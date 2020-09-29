#include<iostream>

int main(int argc, char **argv){
    int ival = 1.01;
    //int &rval1 = 1.01; // illegal
    int &rval2 = ival;
    //int &rval3;

    return 0;
}
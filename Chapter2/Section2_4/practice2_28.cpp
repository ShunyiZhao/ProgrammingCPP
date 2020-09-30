#include<iostream>

using namespace std;

int main(int argc, char **argv){
    const int v2 = 0; // top level
    int v1 = v2; // no const
    int *p1 = &v1; // low level
    const int *p2 = &v2, *const p3 = &i, &r2 = v2;
    // low level top level

    return 0;
}
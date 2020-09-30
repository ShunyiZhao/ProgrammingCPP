#include<iostream>

using namespace std;

int main(int argc, char **argv){
    //const int buf; //illegal
    int cnt = 0;
    const int sz = cnt;
    ++cnt;
    //++sz;

    return 0;
}
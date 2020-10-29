#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main(int argc, char **argv){
    constexpr int nSize = 10;
    int arrNumbers[10];
    for(int i = 0; i < nSize; i++){
        arrNumbers[i] = i;
    }
    for(auto number : arrNumbers){
        cout << number << endl;
    }

    return 0;
}
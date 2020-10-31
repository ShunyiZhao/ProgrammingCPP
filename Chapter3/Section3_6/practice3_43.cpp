#include<iostream>
#include<vector>

using std::cout;
using std::cin;
using std::endl;
using std::begin;
using std::end;

using namespace std;

constexpr unsigned nSize_1 = 3;
constexpr unsigned nSize_2 = 4;

int main(int argc, char **argv){
    int ia[nSize_1][nSize_2] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

    // 1
    for(int (&p)[nSize_2] : ia){
        for (int &p2 : p){
            cout << p2 << endl;
        }
    }

    cout << endl;
    // 2
    for(unsigned i = 0; i < nSize_1; i++){
        for(unsigned j = 0; j < nSize_2; j++){
            cout << ia[i][j] << endl;
        }
    }

    cout << endl;
    //3
    for(int (*p)[4] = begin(ia); p != end(ia); p++){
        for (int *p2 = begin(*p); p2 != end(*p); p2++){
            cout << *p2 << endl;
        }
    }

    return 0;
}
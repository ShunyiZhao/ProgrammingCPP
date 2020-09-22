#include<iostream>

//#define TEST

using namespace std;

int main(int argc, char **argv){

    int *check = new int[50];
    int **check2D = new int*[30];

    for(int i = 0; i < 30; i++){
        check2D[i] = new int[50];
    }

    #ifdef TEST
        std::cout<<"In test"<<std::endl;
    #endif

    std::cout<<"Hello World!"<<std::endl;

    delete[] check;
    for(int i =0; i < 30; i++){
        delete[] check2D[i];
    }
    delete[] check2D;

    return 0;
}
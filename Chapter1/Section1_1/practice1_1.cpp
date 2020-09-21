#include<iostream>

int main(int argc, char **argv){

    int *check = new int[50];
    int **check2D = new int*[30];

    for(int i = 0; i < 30; i++){
        check2D[i] = new int[50];
    }

    std::cout<<"Hello World!"<<std::endl;

    delete check;
    for(int i =0; i < 30; i++){
        delete check2D[i];
    }
    delete check2D;

    return 0;
}
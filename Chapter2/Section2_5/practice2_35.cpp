#include<iostream>

using namespace std;

int main(int argc, char **argv){
    const int i = 42;
    auto j = i;
    const auto &k = i;
    auto *p = &i;
    const auto j2 = i, &k2 = i;

    return 0;
}
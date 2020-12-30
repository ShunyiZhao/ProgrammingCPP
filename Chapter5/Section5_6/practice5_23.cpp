#include<iostream>
#include<stdexcept>

using std::cout;
using std::cin;
using std::cerr;
using std::endl;
using std::runtime_error;

int main(int argc, char **argv){
    if (argc != 1){
        cout << argv[0] << endl;
        cerr << "You can not use more arguments in this programme!" << endl;
        exit(1);
    }

    int nInput1 = 0, nInput2 = 0;
    while (cin >> nInput1 >> nInput2)
    {
        cout << "new loop" << endl;
        try {
            if (nInput2 == 0){
                throw runtime_error("You can not use 0!");
            }
            else
            {
                break;
            }
            
        } catch (runtime_error) {
            char nFlag = 'Y';
            cout << "Input a new number (Y/n)?" << endl;
            cin >> nFlag;
            if (nFlag != 'Y') {
                cerr << "exting programme!" << endl;
                exit(1);
            }
        }   
    }

    cout << nInput1 / nInput2 << endl;

    return 0;
}
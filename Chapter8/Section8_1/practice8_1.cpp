#include<iostream>
#include<fstream>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::cerr;
using std::istream;
using std::string;

istream& readData(istream &);

int main(int argc, char **argv){
    if (argc != 1){
        cerr << "You can not use arguments in this programme! In program " << argv[0] << endl;
        exit(1);
    }

    istream &myStream = readData(cin);

    return 0;
}

istream& readData(istream &istreamInput){
    string strInput;

    while (istreamInput >> strInput) {
        if (istreamInput.eof()){
            break;
        }
        cout << strInput << endl;
    }

    istreamInput.clear();
    return istreamInput;
}
#include<iostream>
#include<string>
#include"Person.h"

using std::string;

// constructor
Person::Person(std::istream &is){
    read(is, *this);
}

// get methods
string Person::getName() const{
    return name;
}

string Person::getAddress() const{
    return address;
}

// set methods
void Person::setAddress(string addressInputted){
    address = addressInputted;
}

// other methods
std::istream &read(std::istream &is, Person &person){
    string name, address;
    is >> name >> address;

    person.name = name;
    person.setAddress(address);

    return is;
}

std::ostream &print(std::ostream &os, Person person){
    os << person.getName() << ", " << person.getAddress();
    return os;
}
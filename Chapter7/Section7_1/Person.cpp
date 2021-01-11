#include<iostream>
#include<string>
#include"Person.h"

using std::string;

// get methods
string Person::getName() const{
    return name;
}

string Person::getAddress() const{
    return address;
}

// set methods
void Person::setName(string nameInputted){
    name = nameInputted;
}

void Person::setAddress(string addressInputted){
    address = addressInputted;
}

std::istream &read(std::istream &is, Person &person){
    string name, address;
    is >> name >> address;

    person.setName(name);
    person.setAddress(address);

    return is;
}

std::ostream &print(std::ostream &os, Person person){
    os << person.getName() << ", " << person.getAddress();
    return os;
}
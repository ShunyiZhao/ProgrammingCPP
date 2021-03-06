#include<iostream>

struct Person{
private:
    std::string name;
    std::string address;
public:
    // constructor
    Person() = default;
    Person(std::string strName, std::string strAddress) : name(strName), address(strAddress) {};
    Person(std::istream &);
    // methods
    std::string getName() const;
    std::string getAddress() const;
    void setName(std::string nameInputted);
    void setAddress(std::string addressInputted);
};

std::istream &read(std::istream &is, Person &person);
std::ostream &print(std::ostream &os, Person person);
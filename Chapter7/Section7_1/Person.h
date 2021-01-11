#include<iostream>

struct Person{
private:
    std::string name;
    std::string address;
public:
    std::string getName() const;
    std::string getAddress() const;
    void setName(std::string nameInputted);
    void setAddress(std::string addressInputted);
};

std::istream &read(std::istream &is, Person &person);
std::ostream &print(std::ostream &os, Person person);
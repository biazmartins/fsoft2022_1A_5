
#include "Person.h"

Person::Person(string name) {
    this->name = name;
}
Person::~Person(){
    this->name = "none";
}
string Person::getName() const {
    return this->name;
}

void Person::setName(string name){
    this->name = name;
}


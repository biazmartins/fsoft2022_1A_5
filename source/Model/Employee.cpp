
#include "employee.h"

Employee::Employee(string name, string specialty, string store){
    this->name = name;
    this->specialty = specialty;
    this->store = store;
}


Employee::~Employee(){
    this->name = "none";
    this->store = "none";
    this->specialty = "none";
}

string Employee::getName() const {
    return this->name;
}

void Employee::setName(string name) {
    this->name = name;
}

string Employee::getSpecialty() const {
    return this->specialty;
}

void Employee::setSpecialty(string specialty) {
    this->specialty = specialty;
}

string Employee::getStore() const {
    return this->store;
}

void Employee::setStore(string store) {
    this->store = store;
}
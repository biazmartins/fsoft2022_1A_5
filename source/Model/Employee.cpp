//
// Created by Ana Rita Maia Barbosa da Silva on 03/06/2022.
//
#include "Employee.h"

Employee::Employee(const string& name, const string& store, const string& specialty, const string& email): Person(name){ //uma vez que nos gráficos não está o email, coloco?
    this->store = store;
    this->specialty = specialty;
    this->email = email;
}

Employee::Employee(const Employee& employee): Person(employee.name){
    this->store = employee.name;
    this->specialty = employee.specialty;
    this->email = employee.email;
}

Employee::~Employee(){//?????????
}


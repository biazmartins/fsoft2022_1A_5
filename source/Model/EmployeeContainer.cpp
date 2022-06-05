//
// Created by Ana Rita Maia Barbosa da Silva on 04/06/2022.
//
#include <tuple>
#include "duplicatedDataException.h"
#include "dataConsistencyException.h"
#include "StudentContainer.h"

using namespace std;

list<Employee>::iterator EmployeeContainer::search(char email){
    list<Employee>::iterator it = this->employees.begin();
    for(; it != this->employees.end(); ++it){
        if((*it) == email){
            return it;
        }
    }
    return it;
}

list<Employee> EmployeeContainer::getAll(){
    list<Employee> newlist (this->employees);
    return newlist;
}

Employee* EmployeeContainer::get(char email){
    list<Employee>::iterator it = search(email);
    if(it != this->employees.end()){
        return &(*it);
    }
    return NULL;
}


//não entendo o código a partir daqui!!
void EmployeeContainer::add(const Employee& obj){
    list<Employee>::iterator it = search(obj.getEmail());
    if(it == this->employees.end()){
        this->employees.push_back(obj);
    }else{
        string msg = "Employee: " + to_string(obj.getEmail());
    }
}











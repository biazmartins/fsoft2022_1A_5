#include<iostream>
#include "Workshop.h"
#include "invalidDataException.h"

Workshop::Workshop(string store, Employee *employees, string segmentation){
    this->setStore(store);
    this->setEmployee(employees);
    this->setSegmentation(segmentation);
}

Workshop::Workshop(){
    this->store = store;
    this->employees = employees;
    this->segmentation = segmentation;
}

string Workshop::getStore() const {
    return this->store;
}

void Workshop::setStore(string store){
    this->store= store;
}

Employee Workshop::getEmployee() const {
    return this->employees;
}

void Workshop::setEmployee(Employee *employees) {
    if(isPointerNotNull(employees) == true){
        this->employees = employees;
    }else{
        string msg = "Workshop: employee = NULL";
        throw invalidDataException(msg);     }
}

string Workshop::getSegmentation() const {
    return this->segmentation;
}

void Workshop::setSegmentation(string segmentation) {
    this->segmentation= segmentation;
}

bool Workshop::isPointerNotNull(void * ptr){
    if(ptr == NULL){
        return false;
    }
    return true;
}

bool Workshop::operator == (const Workshop& obj) const{
    if(((this->employees) == (obj.employees)) && ((this->employees) == (obj.employees))){
        return true;
    }
return false;
}
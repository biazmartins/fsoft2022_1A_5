#include "Workshop.h"

Workshop::Workshop(string store, Employee employees, string segmentation){
    this->store = store;
    this->employees = employees;
    this->segmentation = segmentation;
}

Workshop::Workshop(){
    this->store = store;
    this->employees = employees;
    this->segmentation = segmentation;
}

string Workshop::getStore() const {
    return this->store;
}

void Workshop::setStore(string store) {
    this->store= store;
}

Employee Workshop::getEmployee() const {
    return this->employees;
}

void Workshop::setEmployee(Employee employees) {
    this->employees= employees;
}

string Workshop::getSegmentation() const {
    return this->segmentation;
}

void Workshop::setSegmentation(string segmentation) {
    this->segmentation= segmentation;
}




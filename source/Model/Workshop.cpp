#include "Workshop.h"

Workshop::Workshop(){
    this->name = "";
    setDataForConsistency();
}
Workshop::Workshop(string name){
    this->name = name;
    setDataForConsistency();
}
Workshop::Workshop(Workshop obj){
    this->name = obj.name;

    this->employees = obj.employees;
    this->store = obj.store;
    this->segmentation = obj.segmentation;
    setDataForConsistency()
}

const string& Workshop::getName() const {
    return name;
}

void Workshop::setName(string name){
    this->name =name;
}
EmployeesContainer & Workshop::getEmployeesContainer(){
    return this->employees;
}
MakeupStoreContainer & Workshop::getEmployeesContainer(){
    return this->store;
}
SegmentationContainer & Workshop::getEmployeesContainer(){
    return this->segmentation;
}

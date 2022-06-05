//
// Created by Ana Rita Maia Barbosa da Silva on 02/06/2022.
//
//?????????????
#include "MakeupStore.h"

MakeupStore::MakeupStore(){
    this->name = "";
    setDataForConsistency();
}

MakeupStore::MakeupStore(const string& name){
    this->name = name;
    setDataForConsistency();
}

MakeupStore::MakeupStore(const MakeupStor& obj){
    this->name = obj.name;

    this->clientsFile = obj.clientsFile;
    this->employees = obj.employees;
    this->workshops = obj.workshops;
    setDataForConsistency();
}

const string& MakeupStore::getName() const { //?
    return name;
}

void MakeupStore::setName(const string &name){
    this->name = name;
}

ClientsFileContainer & MakeupStore::getClientsFileContainer(){
    return this->clientsFile;
}
EmployeesContainer & MakeupStore::getEmployeeContainer(){
    return this->employees;
}
WorkshopsContainer & MakeupStore::getWorkshopsContainer(){
    return this->workshops;
}

//não entendo a ultima função void do professor

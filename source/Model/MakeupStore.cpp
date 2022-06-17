
#include "MakeupStore.h"

MakeupStore::MakeupStore(){
    this->store = "";
}

MakeupStore::MakeupStore(string store){
    this->store = store;
}
string MakeupStore::getStore() {
    return this ->store;
}

void MakeupStore::setStore(string store) {
    this->store = store;
}

WorkshopContainer & MakeupStore::getWorkshopContainer() {
    return this->workshops;
}

EmployeeContainer & MakeupStore::getEmployeeContainer(){
    return this->employees;
}
ClientFileContainer & MakeupStore::getClientFileContainer() {
    return this->clientfiles;
}





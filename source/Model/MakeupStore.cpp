#include "MakeupStore.h"

MakeupStore::MakeupStore(){
    this->store = "";
}

MakeupStore::MakeupStore(const string store){
    this->store = store;
}
string MakeupStore::getStore() {
    return this ->store;
}

void MakeupStore::setStore(string store) {
    this->store = store;
}

WorkshopContainer & MakeupStore::getWorkshopContainer() {
    return this->workshop;
}
EmployeeContainer & MakeupStore::getEmployeeContainer(){
    return this->employee;
}
ClientFileContainer & MakeupStore::getClientFileContainer() {
    return this->clientFile;
}




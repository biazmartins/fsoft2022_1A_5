
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
};





/*MakeupStore::MakeupStore(MakeupStore const &obj){
    this->name = obj.name;

    this->clientFile = obj.clientFile;
    this->employees = obj.employees;
    this->workshops = obj.workshops;

}
ClientsFileContainer & MakeupStore::getClientsFileContainer(){
    return this->clientsFile;
}
EmployeesContainer & MakeupStore::getEmployeeContainer(){
    return this->employees;
}
WorkshopsContainer & MakeupStore::getWorkshopContainer(){
    return this->workshops;
}
*/
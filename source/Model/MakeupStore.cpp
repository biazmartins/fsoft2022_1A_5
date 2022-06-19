#include "MakeupStore.h"

MakeupStore::MakeupStore(){
    this->store = "";
}

MakeupStore::MakeupStore(const string store){ //Constructor, a MakeupStore é constituída por uma store
    this->store = store;
}
string MakeupStore::getStore() {//vai buscar o nome/localização da loja
    return this ->store;
}

void MakeupStore::setStore(string store) {// vai alterar o nome/localização da loja (???)
    this->store = store;
}

WorkshopContainer & MakeupStore::getWorkshopContainer() { //através do workshopContainer anteriormente criado, é possivel ter acesso a todos os workhsops que foram marcados para aquela loja
    return this->workshop;          //através desta função, é possível ver 
}
EmployeeContainer & MakeupStore::getEmployeeContainer(){//
    return this->employee;
}
ClientFileContainer & MakeupStore::getClientFileContainer() {
    return this->clientFile;
}




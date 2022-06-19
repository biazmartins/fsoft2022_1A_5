#ifndef HEADERS_MODEL_MAKEUPSTORE_H
#define HEADERS_MODEL_MAKEUPSTORE_H

#include <string>
#include "WorkshopContainer.h"
#include "EmployeeContainer.h"
#include "ClientFileContainer.h"

using namespace std;

class MakeupStore{
private:
    string store;
    WorkshopContainer workshop;
    EmployeeContainer employee;
    ClientFileContainer clientFile;

public:
    //construtores
    MakeupStore();
    MakeupStore(const string store);
    string getStore(); //ter o nome da loja
    void setStore(string store); //mudar o nome da loja

    WorkshopContainer & getWorkshopContainer();
    EmployeeContainer & getEmployeeContainer();
    ClientFileContainer & getClientFileContainer();
};

#endif //HEADERS_MODEL_MAKEUPSTORE_H
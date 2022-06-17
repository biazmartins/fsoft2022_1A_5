#include <string>
#include "WorkshopContainer.h"
#include "EmployeeContainer.h"
#include "ClientFileContainer.h"

using namespace std;

class MakeupStore{
private:
    string store;
    WorkshopContainer workshops;
    EmployeeContainer employees;
    ClientFileContainer clientfiles;

public:
    //construtores
    MakeupStore();
    MakeupStore(string store);
    string getStore(); //ter o nome da loja
    void setStore(string store); //mudar o nome da loja

    WorkshopContainer & getWorkshopContainer();
    EmployeeContainer & getEmployeeContainer();
    ClientFileContainer & getClientFileContainer();
};


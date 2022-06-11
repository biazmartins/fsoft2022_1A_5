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
    MakeupStore();
    MakeupStore(string store);
    string getStore();
    void setStore(string store);

    WorkshopContainer & getWorkshopContainer();
    EmployeeContainer & getEmployeeContainer();
    ClientFileContainer & getClientFileContainer();
};


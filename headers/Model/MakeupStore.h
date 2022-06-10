#include <string>
#include "WorkshopContainer.h"
#include "EmployeeContainer.h"
#include "ClientFileContainer.h"

using namespace std;

class MakeupStore{
private:
public:
    string store;
    WorkshopContainer workshops;
    EmployeeContainer employees;
    ClientFileContainer clientfiles;


    MakeupStore();
    MakeupStore(string store);
    MakeupStore(MakeupStore const &obj);
    string getStore();
    void setStore(string store);

    WorkshopContainer & getWorkshopContainer();
    EmployeeContainer & getEmployeeContainer();
    ClientFileContainer & getClientFileContainer();
};


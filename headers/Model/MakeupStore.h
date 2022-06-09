#include <string>
#include "WorkshopContainer.h"
#include "EmployeeContainer.h"
#include "ClientFileContainer.h"

using namespace std;

class MakeupStore{
private:
public:
    string name;
    WorkshopContainer workshops;
    EmployeeContainer employees;
    ClientFileContainer clientfiles;

    void setDataForConsistency();


    MakeupStore();
    MakeupStore(const string& name);
    MakeupStore(const MakeupStore& obj);
    const string& getName() const;
    void setName(const string& name);

    WorkshopContainer & getWorkshopContainer();
    EmployeeContainer & getEmployeeContainer();
    ClientFileContainer & getClientFileContainer()
};


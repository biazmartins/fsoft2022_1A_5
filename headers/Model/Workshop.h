#include <iostream>
#include <string>
#include "Employee.h"


using namespace std;

class Workshop{
private:
    string segmentation;
    string store;
    Employee employees;

public:
    Workshop(Segmentation * segmentation);
    Workshop(Store * store);
    Workshop(Employee * employee);
    Workshop(const Workshop& obj);
    ~Workshop();

    Workshop* getWorkshop() const;
    void setSegmentation(Segmentation *segmentation);
    void setStore(Store *store);
    void setEmployee(Employee *employee);

    bool operator == (const Workshop& obj) const;
    bool operator == (const Segmentation& obj) const;
    bool operator == (const Store& obj) const;
    bool operator == (const Employee& obj) const;

}

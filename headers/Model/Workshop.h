#include <iostream>
#include <string>
#include "employee.h"


using namespace std;

class Workshop{
private:
    string segmentation;
    string store;
    Employee employees;

public:
    Workshop(string segmentation, string store, Employee employees);
    Workshop(const Workshop& obj);
    ~Workshop();

    Workshop* getWorkshop() const;
    void setSegmentation(string segmentation);
    void setStore(string store);
    void setEmployee(Employee employee);

    bool operator == (const Workshop& obj) const;
    bool operator == (const string& obj) const;
    bool operator == (const string& obj) const;
    bool operator == (const Employee& obj) const;

};

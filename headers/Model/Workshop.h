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
    Workshop(const Workshop obj);
    ~Workshop();

    Workshop* getWorkshop();
    void setSegmentation(string segmentation);
    void setStore(string store);
    void setEmployee(Employee employee);

    bool operator == (Workshop obj);
    bool operator == (string obj);
    bool operator == (string obj);
    bool operator == (Employee obj);

};

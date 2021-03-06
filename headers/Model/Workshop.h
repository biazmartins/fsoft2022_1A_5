#ifndef HEADERS_MODEL_WORKSHOP_H
#define HEADERS_MODEL_WORKSHOP_H

#include <iostream>
#include <string>
#include "employee.h"

using namespace std;

class Workshop{
private:
    string store;
    Employee employees;
    string segmentation;
    bool isPointerNotNull(void * ptr);

public:
    Workshop(string store, Employee *employees, string segmentation);
    Workshop();

    string getStore() const;
    void setStore(string store);

    Employee getEmployee() const;
    void setEmployee(Employee *employees);

    string getSegmentation() const;
    void setSegmentation(string segmentation);

    void printInfo();
    bool operator == (const Workshop& obj) const;

};

#endif //HEADERS_MODEL_WORKSHOP_H
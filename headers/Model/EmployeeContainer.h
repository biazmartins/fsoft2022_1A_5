#ifndef HEADERS_MODEL_EMPLOYEECONTAINER_H
#define HEADERS_MODEL_EMPLOYEECONTAINER_H


#include <list>
#include "employee.h"
#include "Date.h"

class EmployeeContainer {
private:
    list <Employee> employee;
    list<Employee>::iterator search(string store, string specialty);

public:
    list <Employee> getAll();

    void add(Employee empregado);
    void remove(string store, string specialty);
    void update(string store, string specialty);

};
#endif //HEADERS_MODEL_EMPLOYEECONTAINER_H

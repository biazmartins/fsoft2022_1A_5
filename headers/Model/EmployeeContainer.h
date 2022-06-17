#ifndef FSOFT2022_1A_5_EMPLOYEECONTAINER_H
#define FSOFT2022_1A_5_EMPLOYEECONTAINER_H


#include <list>
#include "employee.h"
#include "Date.h"

class EmployeeContainer{
private:
    list<Employee> employee;
    list<Employee>::iterator search(string store, string specialty);

public:
    list<Employee> getAll();
    Employee* get(sting store, string specialty);


    void add(Employee obj);
    void remove(string store, string specialty);
    void update(string store, string specialty);

#endif //FSOFT2022_1A_5_EMPLOYEECONTAINER_H


#ifndef HEADERS_VIEWS_EMPLOYEEVIEW_H
#define HEADERS_VIEWS_EMPLOYEEVIEW_H

#include <list>
#include "employee.h"

class EmployeeView{
public:
    Employee getEmployee();
    void printEmployee(Employee *employee);
    void printEmployee(list<Employee>& employee);
};

#endif //HEADERS_VIEWS_EMPLOYEEVIEW_H

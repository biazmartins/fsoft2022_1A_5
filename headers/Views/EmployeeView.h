//
// Created by Ana Rita Maia Barbosa da Silva on 10/06/2022.
//

#ifndef FSOFT2022_1A_5_EMPLOYEEVIEW_H
#define FSOFT2022_1A_5_EMPLOYEEVIEW_H

#include <list>
#include "/Users/anarita/Desktop/FSOFT3/fsoft2022_1A_5/headers/Model/employee.h"

class EmployeeView{
public:
    Employee getEmployee();
    void printEmployee(Employee *employee);
    void printEmployee(list<employee>& employee);
};

#endif //FSOFT2022_1A_5_EMPLOYEEVIEW_H
//fgd
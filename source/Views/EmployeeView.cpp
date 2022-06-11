//
// Created by Ana Rita Maia Barbosa da Silva on 10/06/2022.
//

#include <iostream>
#include "/Users/anarita/Desktop/FSOFT3/fsoft2022_1A_5/headers/Views/EmployeeView.h"
#include "Utils.h"
#include "/Users/anarita/Desktop/FSOFT3/fsoft2022_1A_5/headers/Exceptions/invalidDataException.h"

using namespace std;

Employee EmployeeView::getEmployee(){
    char name;
    char store;
    char specialty;
    Employee employee ("name", "store", "specialty");
    bool flag = false;
    do{
        try{
            flag = false;
            cout<<"Employee"<<endl;
            string name = Utils::getString("name");
            employee.setName(name);
        }catch(invalidaDataException& e){
            flag = true;
        }
    }while(flag == true);
    return employee;
}

void EmployeeView::printEmployee(Employee *employee){
    cout<<employee->getName()<<":"<<endl;
    cout<<employee->getStore()<<":"<<endl;
    cout<<employee->getSpecialty()<<":"<<endl;
}

void EmployeeView::printEmployee(list<Employee>& employees){
    for(list<Employee>::iterator it = employees.begin(); it != employees.end(); ++it){
        printEmployee(&*it);
    }
}
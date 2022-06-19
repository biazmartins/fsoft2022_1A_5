#include <iostream>
#include "EmployeeView.h"
#include "Utils.h"
#include "invalidDataException.h"

using namespace std;

Employee EmployeeView::getEmployee(){
    string name;
    string store;
    string specialty;
    Employee employee ("name", "store", "specialty");
    bool flag = false;
    do{
        try{
            flag = false;
            cout<<"Employee"<<endl;
            string name = Utils::getString("name");
            employee.setName(name);
        }catch(invalidDataException& e){
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
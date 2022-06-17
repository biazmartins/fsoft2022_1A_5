#include <iostream>
#include "WorkshopView.h"
#include "Utils.h"
#include "InvalidDataException.h"
#include "Workshop.h"
#include "EmployeeContainer"

using namespace std;

Workshop WorkshopView :: getWorkshop(EmployeeContainer & employees){

    Workshop workshop((Employee  *)1);
    bool flag = false;
    do
        try {
            flag = false;
            cout << "Workshop" << endl;
            string initials = Utils::getString("Enter Employee Initials");
            Employee *employee = employee.get(initials);
            workshop.setEmployee(employee);

        } catch (InvalidDataException &e) {
            flag = true;
        };
    while (flag == true);
    return workshop;
}

void WorkshopView :: printWorkshop(Workshop *workshop) {
    Employee *employee = Workshop->getEmployee;
    cout << "\t" << employee->getInitials() << ":" << employee->getDesignation() << endl;
}
void WorkshopView :: printWorkshop(Employee *employee, list<Workshop> Workshop) {
    cout << employee->getInitials() << ":" << employee->getName() << endl;
    for(list<Workshop>::iterator it=workshops.begin(); it!=workshops.end(); ++it){
        printWorkshop(*it);
    }
}


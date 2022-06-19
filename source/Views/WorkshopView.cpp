#include <iostream>
#include "WorkshopView.h"
#include "Utils.h"
#include "invalidDataException.h"
#include "Workshop.h"
#include "EmployeeContainer.h"

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

        } catch (invalidDataException &e) {
            flag = true;
        }
    while (flag == true);
    return workshop;
}

void WorkshopView :: printWorkshop(Workshop *workshop) {
    Employee *employee = Workshop->getEmployee;
    cout << "\t" << employee->getName() << ":" << employee->getStore() << ":" << employee->getSpecialty() << endl;
}
void WorkshopView :: printWorkshop(Employee *employee, list<Workshop> Workshop) {
    cout << employee->getName() << ":" << employee->getName() << endl;
    for(list<Workshop>::iterator it=workshops.begin(); it!=workshops.end(); ++it){
        printWorkshop(*it);
    }
}


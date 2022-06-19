#include <iostream>
#include "WorkshopView.h"
#include "Utils.h"
#include "invalidDataException.h"
#include "Workshop.h"
#include "EmployeeContainer.h"

using namespace std;

Workshop WorkshopView :: getWorkshop(EmployeeContainer & employees){

    Workshop workshop("store", employees, "segmentation"); //criação de um construtor com 3 parâametros
    bool flag = false;
    do
        try {
            flag = false;
            cout << "Workshop" << endl;
            string name = Utils::getString("Enter Employee Initials");
            Employee *employee = employee->get(name);
            workshop.setEmployee(employee);

        } catch (invalidDataException &e) {
            flag = true;
        }
    while (flag == true);
    return workshop;
}

void WorkshopView::printWorkshop(Workshop *workshop) { //dá print a apenas 1 workshop
    Employee employee = workshop->getEmployee(); //o getEmployee está a ser chamado pelo workshop.
    cout << "\t" << workshop.getEmployee() << ":" << workshop.getStore() << ":" << workshop.getSegmentation() << endl;
}

void WorkshopView::printWorkshop(list<Workshop>& workshops) { //é um loop que vai chamar a função de cima várias vezes, ou seja, vai dar print a várias funções, isto é, a uma lista de workshops
    for(list<Workshop>::iterator it=workshops.begin(); it!=workshops.end(); ++it){//loop que vai criar um iterador para a lista (worksho), it.begin é o inicio da lista e continua enquanto nao chegou ao fim..a cada iteração vamos pergunrrendo a lista de um em um elemento
        printWorkshop(*it);
    }
}


#include<iostream>
#include "WorkshopView.h"

using namespace std;

    Workshop WorkshopView::getWorkshop(){
    string store;
    Employee employees;
    string segmentation;

    Workshop workshop("store", Employees *employees, "segmentation"); //criação de um construtor com 3 parâmetros
    bool flag = false;
    do
        try {
            flag = false;
            cout << "Workshop" << endl;
            string segmentation = Utils::getString("Enter segmentation");
            workshop.setSegmentation(segmentation);
        } catch (invalidDataException &e) {
            flag = true;
        }
    while (flag == true);
    return workshop;
}

void WorkshopView::printWorkshop(Workshop *workshop) { //dá print a apenas 1 workshop
    cout<<workshop->getStore()<<":"<< workshop->getEmployee()<<":"<<workshop->getSegmentation()<<":"<<endl;
}

void WorkshopView::printWorkshop(list<Workshop>& workshops) { //é um loop que vai chamar a função de cima várias vezes, ou seja, vai dar print a várias funções, isto é, a uma lista de workshops
    for(list<Workshop>::iterator it=workshops.begin(); it != workshops.end(); ++it){//loop que vai criar um iterador para a lista (workshop), it.begin é o inicio da lista e continua enquanto nao chegou ao fim..a cada iteração vamos pergunrrendo a lista de um em um elemento
        printWorkshop(&*it);
    }
}


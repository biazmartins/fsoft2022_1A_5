#ifndef HEADERS_CONTROLLERS_CONTROLLER_H
#define HEADERS_CONTROLLERS_CONTROLLER_H

//chamar as bibliotecas
#include "View.h"
#include "ClientFileView.h"
#include "EmployeeView.h"
#include "Workshop.h"
#include "MakeupStore.h"
#include "WorkshopView.h"

class Controller{
private: //parâmetros/funções do controller
    MakeupStore model;
    View view;
    ClientFileView clientFileView;
    EmployeeView employeeView;
    WorkshopView workshopView;
    void runClientFile();
    void runEmployees();
    void runWorkshops();
public: //local onde vai correr o programa
    Controller(MakeupStore& makeupStore);
    void run();
};

#endif //HEADERS_CONTROLLERS_CONTROLLER_H

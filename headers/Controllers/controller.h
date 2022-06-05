//
// Created by Ana Rita Maia Barbosa da Silva on 03/06/2022.
//

#ifndef FSOFT2022_1A_5_CONTROLLER_H
#define FSOFT2022_1A_5_CONTROLLER_H

#include "View.h"
#include "ClientFileView.h"
#include "EmployeeView.h"
#include "Workshop.h"
#include "MakeupStore.h"

class Controller{
private:
    MakeupStore model;
    View view;
    ClientFileView clientFileView;
    EmployeeView employeeView;
    WorkshopView workshopView;
    void runClientFile();
    void runEmployees();
    void runWorkshops();
public:
    Controller(MakeupStore& makeupStore);
    void run();
};

#endif //FSOFT2022_1A_5_CONTROLLER_H

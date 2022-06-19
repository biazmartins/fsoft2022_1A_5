#ifndef HEADERS_VIEWS_WORKSHOPVIEW_H
#define HEADERS_VIEWS_WORKSHOPVIEW_H

#include <list>
#include <iostream>
#include "WorkshopContainer.h"
#include "EmployeeContainer.h"
#include "Utils.h"
#include "invalidDataException.h"


class WorkshopView{
public:
    Workshop getWorkshop();
    void printWorkshop(Workshop *workshop); //dar print a 1 workshop
    void printWorkshop(list<Workshop>& workshops); //igual à primeira, mando uma lista
};

#endif //HEADERS_VIEWS_WORKSHOPVIEW_H

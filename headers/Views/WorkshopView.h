#ifndef HEADERS_VIEWS_WORKSHOPVIEW_H
#define HEADERS_VIEWS_WORKSHOPVIEW_H

#include <list>
#include "Workshop.h"
#include "EmployeeContainer.h"

class WorkshopView{
private:
public:
    Workshop getWorkshop(EmployeeContainer & employees);
    void printWorkshop(Workshop *workshop); //dar print a 1 workshop
    void printWorkshop(list<Workshop>& workshops); //igual à primeira, mando uma lista
};

#endif //HEADERS_VIEWS_WORKSHOPVIEW_H

#ifndef HEADERS_VIEWS_WORKSHOPVIEW_H
#define HEADERS_VIEWS_WORKSHOPVIEW_H

#include <list>
#include "Workshop.h"
#include "EmployeeContainer.h"

class WorkshopView{
public:
    Workshop getWorkshop(EmployeeContainer & employees);
    void printWorkshop(Workshop *workshop);
    void printWorkshop(Employee *employee, list<Workshop>& workshops);
};

#endif //HEADERS_VIEWS_WORKSHOPVIEW_H

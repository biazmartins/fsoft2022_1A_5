#ifndef HEADERS_VIEWS_WORKSHOPVIEW_H
#define HEADERS_VIEWS_WORKSHOPVIEW_H

#include <list>
#include "Workshop.h"
#include "EmployeeContainer.h"

class WorkshopView{
private:
public:
    Workshop getWorkshop(EmployeeContainer & employees);
    void printWorkshop(Workshop *workshop);
    void printWorkshop(Employee *employee, list<Emloyee>& employees);
};

#endif //HEADERS_VIEWS_WORKSHOPVIEW_H

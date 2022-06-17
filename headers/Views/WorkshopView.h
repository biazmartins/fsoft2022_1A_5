#ifndef FSOFT2022_1A_5_WORKSHOPVIEW_H
#define FSOFT2022_1A_5_WORKSHOPVIEW_H

#include <list>
#include "Workshop.h"
#include "EmployeeContainer.h"

class WorkshopView{
private:
public:
    Workshop getWorkshop(EmployeeContainer & employees);
    void printWorkshop(Workshop *workshop);
    void printWorkshop(Employee *employee);
};

#endif //FSOFT2022_1A_5_WORKSHOPVIEW_H

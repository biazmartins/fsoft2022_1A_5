#ifndef FSOFT2022_1A_5_WORKSHOPVIEW_H
#define FSOFT2022_1A_5_WORKSHOPVIEW_H

#include <list>
#include "Workshop.h"
#include "EmployeeContainer.h"

class WorkshopView{
private:
public:
    Workshop getWorkshop(EmployeeContainer & employees, SegmentationContainer & segmentation, MakeupStoreContainer & makeupstore);
    void printWorkshop(Workshop *workshop);
    void printWorkshop(Employee *employee, Segmentation *segmentation, MakeupStore *makeupstore, list<Workshop> workshops);
};

#endif //FSOFT2022_1A_5_WORKSHOPVIEW_H

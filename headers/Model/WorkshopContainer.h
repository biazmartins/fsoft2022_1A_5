#ifndef FSOFT2022_1A_5_WORKSHOPCONTAINER_H
#define FSOFT2022_1A_5_WORKSHOPCONTAINER_H

#include <list>
#include "Workshop.h"

class WorkshopContainer{
private:
    list<Workshop> workshop;
    list<Workshop>::iterator search(string segmentation);

public:
    list<Workshop> getAll();

    void add(Workshop evento);
    void remove(string segmentation);
    void update(string segmentation);

};
#endif //FSOFT2022_1A_5_WORKSHOPCONTAINER_H
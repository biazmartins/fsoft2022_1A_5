#ifndef HEADERS_MODEL_WORKSHOPCONTAINER_H
#define HEADERS_MODEL_WORKSHOPCONTAINER_H

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
#endif //HEADERS_MODEL_WORKSHOPCONTAINER_H
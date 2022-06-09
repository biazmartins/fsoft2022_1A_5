#ifndef FSOFT2022_1A_5_WORKSHOPCONTAINER_H
#define FSOFT2022_1A_5_WORKSHOPCONTAINER_H

#include <list>
#include "Workshop.h"

using namespace std;

class WorkshopContainer{
private:
    list<Workshop> workshops;
    list<Workshop>::iterator search(string initials);
public:
    list<Workshop> getAll();
    Workshop* get(string initials);
    void add(Workshop obj);
    void remove(string initials);

};
#endif //FSOFT2022_1A_5_WORKSHOPCONTAINER_H
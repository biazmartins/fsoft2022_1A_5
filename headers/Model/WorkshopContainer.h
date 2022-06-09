#ifndef FSOFT2022_1A_5_WORKSHOPCONTAINER_H
#define FSOFT2022_1A_5_WORKSHOPCONTAINER_H

#include <list>              //codigo semelhante ao do stor
#include "Workshop.h"

using namespace std;

class WorkshopContainer{
private:
    list<Workshop> workshops;
    list<Workshop>::iterator search(const string& initials);
public:
    list<Workshop> getAll();
    Lecture* get(const string& initials);
    void add(const Workshop& obj);
    void remove(const string& initials);

};
#endif //FSOFT2022_1A_5_WORKSHOPCONTAINER_H
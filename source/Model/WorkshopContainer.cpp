//
// Created by beatr on 06/06/2022.
//


#include "C:\Users\beatr\AppData\Roaming\SPB_Data\fsoft2022_1A_5\headers\Model\WorkshopContainer.h"


list<Workshop>::iterator WorkshopContainer::search(char store){
    list<Workshop>::iterator it = this->workshop.begin();
    for(;it != this->workshop.end(); ++it){
        if((*it)== store)
            return it;
    }
    return it;
}

list<Workshop>::iterator WorkshopContainer::search(char employee){
    list<Workshop>::iterator it =this->workshop.begin();
    for(;it != this->workshop.end(); ++it){
        if((*it)== employee)
            return it;
    }
    return it;
}

list<Workshop>::iterator WorkshopContainer::search(char segmentation){
    list<Workshop>::iterator it =this->workshop.begin();
    for(;it != this->workshop.end(); ++it){
        if((*it)== segmentation)
            return it;
    }
    return it;
}

list<Workshop>::iterator WorkshopContainer::search(char date){
    list<Workshop>::iterator it =this->workshop.begin();
    for(;it != this->workshop.end(); ++it){
        if((*it)== date)
            return it;
    }
    return it;
}
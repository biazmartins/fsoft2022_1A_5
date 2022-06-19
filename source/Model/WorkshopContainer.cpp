#include "Workshop.h"
#include "WorkshopContainer.h"


using namespace std;

list<Workshop>::iterator WorkshopContainer::search(string segmentation){
    list<Workshop>::iterator it = this->workshop.begin();
    for(; it != this->workshop.end(); ++it){
        if((it->getSegmentation()) == segmentation){
            return it;
        }
    }
    return it;
}

list<Workshop>WorkshopContainer::getAll(){
    list<Workshop> newlist (this->workshop);
    return newlist;
}

void WorkshopContainer::get(string segmentation) {
    list<Workshop>::iterator it = search(segmentation);
    if (it != this->workshop.end()){
        it->printInfo();
    }else{
        cout << "Workshop does not exist." << endl;
    }
}
void WorkshopContainer::add(Workshop evento) {
    list<Workshop>::iterator it = search(evento.getSegmentation()); //procura se um evento existe ou nao, se retornar a ultima posição da lista é porque nao existe
    if (it == this->workshop.end()) {
        this->workshop.push_back(evento); //adicionar um evento na ultima posição
    }
}

void WorkshopContainer::remove(string segmentation) {
    list<Workshop>::iterator it = search(segmentation);
    if (it != this->workshop.end()) {
        this->workshop.erase(it);
    }
}

void WorkshopContainer::update(string segmentation){
    list<Workshop>::iterator it = search(segmentation);
    if(it != this->workshop.end()){
        it->setSegmentation(segmentation);
    }
}

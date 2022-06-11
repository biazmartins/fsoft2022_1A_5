
#include <list>
#include "C:\Users\beatr\AppData\Roaming\SPB_Data\fsoft2022_1A_5\headers\Model\ClientFile.h"

using namespace std;

//Nesta parte do código, o utilizador está a percorrer a lista toda das fichas de clientes existentes
//name

list<ClientFile>::iterator ClientFileContainer::search(string name){
    list<ClientFile>::iterator it = this->ClientFiles.begin();
    for(; it != this->ClientFiles.end(); ++it){
        if((*it) == name){
            return it;
        }
    }
    return it;
}

//não tenho a certeza se esta parte do código é necessária no programa, se for
//para colocar, basicamente esta parte de código permite criar uma nova lista de fichas de cliente

list<ClientFile> ClientFileContainer::getAll(){
    list<ClientFile> newlist (this->ClientFiles);
    return newlist;
}

ClientFile* ClientFileContainer::get(string name){
    list<ClientFile>::iterator it = search(name);
    if(it != this->ClientFiles.end()){
        return &(*it);
    }
    return NULL;
}

//phone_number

list<ClientFile>::iterator ClientFileContainer::search(int phone_number){
    list<ClientFile>::iterator it = this->ClientFiles.begin();
    for(; it != this->ClientFiles.end(); ++it){
        if((*it) == phone_number){
            return it;
        }
    }
    return it;
}

list<ClientFile> ClientFileContainer::getAll(){
    list<ClientFile> newlist (this->ClientFiles);
    return newlist;
}

ClientFile* ClientFileContainer::get(int phone_number){
    list<ClientFile>::iterator it = search(phone_number);
    if(it != this->ClientFiles.end()){
        return &(*it);
    }
    return NULL;
}

//email

list<ClientFile>::iterator ClientFileContainer::search(string email){
    list<ClientFile>::iterator it = this->ClientFiles.begin();
    for(; it != this->ClientFiles.end(); ++it){
        if((*it) == email){
            return it;
        }
    }
    return it;
}

list<ClientFile> ClientFileContainer::getAll(){
    list<ClientFile> newlist (this->ClientFiles);
    return newlist;
}

ClientFile* ClientFileContainer::get(string email){
    list<ClientFile>::iterator it = search(email);
    if(it != this->ClientFiles.end()){
        return &(*it);
    }
    return NULL;
}



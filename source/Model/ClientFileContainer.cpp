
#include <list>
#include "ClientFile.h"
#include "ClientFileContainer.h"

using namespace std;

list<ClientFile>::iterator ClientFileContainer::search(int phone_number){
    list<ClientFile>::iterator it = this->clientFile.begin();
    for(; it != this->clientFile.end(); ++it){
        if((it->getPhoneNumber()) == phone_number){
            return it;
        }
    }
    return it;
}

list<ClientFile> ClientFileContainer::getAll(){
    list<ClientFile> newlist (this->clientFile);
    return newlist;
}

void ClientFileContainer::get(int phone_number) {
    list<ClientFile>::iterator it = search(phone_number);
    if (it != this->clientFile.end()){
        it->printInfo();
    }else{
        cout << "The Client file does not exist." << endl;
    }
}


void ClientFileContainer::add(ClientFile cliente) {
    list<ClientFile>::iterator it = search(cliente.getPhoneNumber()); //procura se um cliente existe ou nao, se retornar a ultima posição da lista é porque nao existe
    if (it == this->clientFile.end()) {
        this->clientFile.push_back(cliente); //adicionar o cliente na ultima posição
    }
}

void ClientFileContainer::remove(int phone_number) {
    list<ClientFile>::iterator it = search(phone_number);
    if (it != this->clientFile.end()) {
        this->clientFile.erase(it);
    }
}

void ClientFileContainer::update(int phone_number, string name, string email){
    list<ClientFile>::iterator it = search(phone_number);
    if(it != this->clientFile.end()){
        it->setPhoneNumber(phone_number);
        it->setName(name);
        it->setEmail(email);
    }
}






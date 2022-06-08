//
// Created by Ana Rita Maia Barbosa da Silva on 04/06/2022.
//

#include <tuple> //que biblioteca é esta?
#include "duplicatedDataException.h"
#include "dataConsistencyException.h"
#include "ClientFileContainer.h"

using namespace std;

//Nesta parte do código, o utilizador está a percorrer a lista toda das fichas de clientes existentes
list<ClientFile>::iterator ClientFileContainer::serach(int phone_number || char email){ //pesquisar a ficha do cliente na lista das fichas dos clientes e procurar através do número de contacto ou do email
    list<ClientFile>::iterator it = this->clients.begin();
    for(; it != this->clients.end(); ++it){
        if((*it) == phone_number || (*it) == email){
            return it;
        }
    }
    return it;
}

//não tenho a certeza se esta parte do código é necessária no programa, se for
//para colocar, basicamente esta parte de código permite criar uma nova lista de fichas de cliente
list<ClientFile> ClientFileContainer::getAll(){
    list<ClientFile> newlist (this->students);
    return newlist;
}

ClientFile* ClientFileContainer::get(int phone_number || char email){
    list<ClientFile>::iterator it = search(phone_number || email);
    if(it != this->clients.end()){
        return &(*it);
    }
    return NULL;
}

//rever esta parte do código porque não sei fazer!!
void ClientFileContainer::add(const ClientFile& obj){
    list<ClientFile>::iterator it = search(obj.getPhoneNumber() || obj.getEmail());
    if(it == this->clientFile.end()){
        this->clients.push_back(obj);
    }else{
        string msg = "Student: "
    }
}

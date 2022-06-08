//
// Created by Ana Rita Maia Barbosa da Silva on 03/06/2022.
//

#include "ClientFile.h"

Client::Client(const string& name, const int& phone_number, const string& email): Person(name){  //???
    this->phone_number = phone_number;
    this->email = email;
}
Client::Client(const Client& client): Person(client.name){
    this->phone_number = client.phone_number;
    this->email = client.email;
}
Client::~Client(){//?
}


int Client::getPhoneNumber() const {
    return phone_number;
}
void Client::setPhoneNumber(int phone_number){
    this->phone_number = phone_number;
}


//não tenho a certeza se é suposto colocar esta parte
string Client::getEmail() const{
    return email;
}
void Client::setEmail(string email){
    this->email = email;
}
//--------------------------------------------------
//a ultima parte do código do professor não entendo!
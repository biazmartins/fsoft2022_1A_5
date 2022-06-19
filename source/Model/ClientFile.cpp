#include "ClientFile.h"

ClientFile::ClientFile(string name, string email, int phone_number) {//Constructor, o clientFile é composto por um "name", "email" e "phone number"
    this->name = name;
    this->email = email;
    this->phone_number = phone_number;
}

ClientFile::ClientFile(){ //Constructor vazio
    this->name = "none";
    this->email= "none";
    this->phone_number = 0;
}
string ClientFile::getName() const {// vai buscar o nome do objeto criado
    return this->name;
}

void ClientFile::setName(string name) {// setName é para alterar ou adicionar um nome
    this->name = name;
}
string ClientFile::getEmail() const {// vai buscar o email do objeto criado
    return this->email;
}

void ClientFile::setEmail(string email) {// setEmail é para alterar ou adicionar um email
    this->email= email;
}

int ClientFile::getPhoneNumber() const {//vai buscar o número de telefone do objeto criado
    return this->phone_number;
}

void ClientFile::setPhoneNumber(int phone_number) {//setPhoneNumber é para alterar ou adicionar um número de telefone
    this->phone_number = phone_number;
}
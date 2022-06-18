#include "ClientFile.h"

ClientFile::ClientFile(string name, string email, int phone_number) {
    this->name = name;
    this->email = email;
    this->phone_number = phone_number;
}

ClientFile::ClientFile(){ //
    this->name = "none";
    this->email= "none";
    this->phone_number = 0;
}
string ClientFile::getName() const {
    return this->name;
}

void ClientFile::setName(string name) {
    this->name = name;
}
string ClientFile::getEmail() const {
    return this->email;
}

void ClientFile::setEmail(string email) {
    this->email= email;
}

int ClientFile::getPhoneNumber() const {
    return this->phone_number;
}

void ClientFile::setPhoneNumber(int phone_number) {
    this->phone_number = phone_number;
}
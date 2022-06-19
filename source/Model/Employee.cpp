#include "employee.h"

Employee::Employee(string name, string specialty, string store){ //constructor, o employee é constituído por um "name", um "specialty" e uma "store"
    this->name = name;
    this->specialty = specialty;
    this->store = store;
}

Employee::Employee(){ //constructor vazio, se eventualmente o constructor estiver vazio, ele retorna "none" em tudo
    this->name = "none";
    this->store = "none";
    this->specialty = "none";
}

string Employee::getName() const { //vai buscar o nome do funcionário
    return this->name;
}

void Employee::setName(string name) {//vai alterar ou adicionar o nome do funcionário
    this->name = name;
}

string Employee::getSpecialty() const {//vai buscar a especialidade do funcionário
    return this->specialty;
}

void Employee::setSpecialty(string specialty) {//vai alterar ou adicionar uma especialidade ao funcionário
    this->specialty = specialty;
}

string Employee::getStore() const { //vai buscar a loja onde o funcionário trabalha
    return this->store;
}

void Employee::setStore(string store) {//vai alterar ou adicionar uma loja onde o funcionário vai trabalhar
    this->store = store;
}
void Employee::printInfo() {
    cout<< this->name<<":"<<endl;
    cout<<this->specialty<<":"<<endl;
    cout<<this->store<<":"<<endl;
}
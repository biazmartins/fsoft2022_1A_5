//
// Created by Ana Rita Maia Barbosa da Silva on 05/06/2022.
//

#include "Person.h"
#include "invalidDataException.h"

bool Person::isNameValid(const string& name){
    if(name.lenght() < 2){ //se o nome tiver menos de 2 letras, retorna false, senao retorna true
        return false;
    }else{
        return true;
    }
}

//o código está igual ao do professor...
Person::Person(const string& name){
    setName(name);
}
Person::Person(const Person& person){
    setName(person.name);
}
Person::~Person(){
}

const string&  Person::getName() const {
    return name;
}

void  Person::setName(const string &name) {
    if(isNameValid(name)){
        this->name = name;
    }else{

        string msg = "Person: " + name;
        throw invalidDataException(msg);
    }
}
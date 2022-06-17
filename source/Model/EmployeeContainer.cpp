#include "employee.h"
#include <list>
#include "EmployeeContainer.h"

using namespace std;

//Nesta parte do código, o utilizador está a percorrer a lista toda das fichas de empregados existentes


list<Employee>::iterator EmployeeContainer::search(string store, string specialty){
    list<Employee>::iterator it = this->employee.begin();
    for(; it != this->employee.end(); ++it){
        if((it->getStore()) == store) {
            if ((it->getStore()) == specialty){
                return it;
            }
        }
    }
    return it;
}

list<Employee> EmployeeContainer::getAll(){
    list<Employee> newlist (this->employee);
    return newlist;
}

void EmployeeContainer::add(Employee empregado) {
    list<Employee>::iterator it = search(empregado.getStore(),
                                         empregado.getSpecialty()); //procura se um employee existe ou nao, se retornar a ultima posição da lista é porque nao existe
    if (it == this->employee.end()) {
        this->employee.push_back(empregado); //adicionar o employee na ultima posição
    }
}

void EmployeeContainer::remove(string store, string specialty) {
    list<Employee>::iterator it = search(store, specialty);
    if (it != this->employee.end()) {
        this->employee.erase(it);
    }
}

void EmployeeContainer::update(string store, string specialty){
    list<Employee>::iterator it = search(store, specialty);
    if(it != this->employee.end()){
        it->setStore(store);
        it->setSpecialty(specialty);
    }
}











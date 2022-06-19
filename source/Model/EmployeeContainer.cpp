#include "employee.h"
#include <list>
#include "EmployeeContainer.h"

using namespace std;

//Nesta parte do código, o utilizador está a percorrer a lista toda dos funcionários existentes

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
void EmployeeContainer::get(string store, string specialty) {
    list<Employee>::iterator it = search(store, specialty);
    if (it != this->employee.end()){
        it->printInfo();
    }else{
        cout << "The Client file does not exist." << endl;
    }
}

void EmployeeContainer::add(Employee empregado) {
    list<Employee>::iterator it = search(empregado.getStore(),
                                         empregado.getSpecialty()); //procura se um employee existe ou nao, se retornar a ultima posição da lista é porque nao existe
    if (it == this->employee.end()) {
        this->employee.push_back(empregado); //adicionar o employee na ultima posição
    }
}

void EmployeeContainer::remove(string store, string specialty) {
    list<Employee>::iterator it = search(store, specialty);//código semelhante ao da função anteriormente representada, ou seja, neste código procura-se se um funcionário existe ou não, se retornar a última posição da lista é porque nao existe
    if (it != this->employee.end()) {
        this->employee.erase(it);//remover o funcionário na última posição
    }
}

void EmployeeContainer::update(string store, string specialty, string name){
    list<Employee>::iterator it = search(store, specialty);// procurar um funcionário (código semelhante aos representados
    if(it != this->employee.end()){
        it->setStore(store);
        it->setSpecialty(specialty);//dar update nas alterações que possam ter acontecido na ficha do funcionário, isto é, pode-se ter alterado a loja em que ele trabalha ou a especialidade
        it->setName(name);
    }
    
}












#include "C:\Users\beatr\AppData\Roaming\SPB_Data\fsoft2022_1A_5\headers\Model\employee.h"
#include <list>
#include "C:\Users\beatr\AppData\Roaming\SPB_Data\fsoft2022_1A_5\headers\Model\EmployeeContainer.h"

using namespace std;

//Nesta parte do código, o utilizador está a percorrer a lista toda das fichas de empregados existentes
//name

list<Employee>::iterator EmployeeContainer::search(string name){
    list<Employee>::iterator it = this->employees.begin();
    for(; it != this->employees.end(); ++it){
        if((*it) == name){
            return it;
        }
    }
    return it;
}

list<Employee> EmployeeContainer::getAll(){
    list<Employee> newlist (this->employees);
    return newlist;
}

Employee* EmployeeContainer::get(string name){
    list<Employee>::iterator it = search(name);
    if(it != this->employees.end()){
        return &(*it);
    }
    return NULL;
}

//specialty

list<Employee>::iterator EmployeeContainer::search(string specialty){
    list<Employee>::iterator it = this->employees.begin();
    for(; it != this->employees.end(); ++it){
        if((*it) == specialty){
            return it;
        }
    }
    return it;
}

list<Employee> EmployeeContainer::getAll(){
    list<Employee> newlist (this->employees);
    return newlist;
}

Employee* EmployeeContainer::get(string specialty){
    list<Employee>::iterator it = search(specialty);
    if(it != this->employees.end()){
        return &(*it);
    }
    return NULL;
}

//store

list<Employee>::iterator EmployeeContainer::search(string store){
    list<Employee>::iterator it = this->employees.begin();
    for(; it != this->employees.end(); ++it){
        if((*it) == store){
            return it;
        }
    }
    return it;
}

list<Employee> EmployeeContainer::getAll(){
    list<Employee> newlist (this->employees);
    return newlist;
}

Employee* EmployeeContainer::get(string store){
    list<Employee>::iterator it = search(store);
    if(it != this->employees.end()){
        return &(*it);
    }
    return NULL;









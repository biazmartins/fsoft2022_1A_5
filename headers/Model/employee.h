//
// Created by beatr on 08/06/2022.
//

#ifndef FSOFT2022_1A_5_EMPLOYEE_H
#define FSOFT2022_1A_5_EMPLOYEE_H

#include <string>
#include <iostream>
#include "Person.h"

using namespace std;

class Employee{
private:
    string name;
    string email; //nao sei se tem
    string specialty;
    string store; //location
public:
    Employee(const string& name, const string& email, const string& specialty, const string& store);
    Employee(const Employee& Employee);
    ~Employee();

    const string& getName() const;
    void setName(const string &name);

    //const string& getEmail() const;
    //void setEmail(const string &?? );

    //const string& getSpecialty () const;
    //void setSpecialty(string &specialty);

    //const string& getStore() const;
    //void setStore(string &store);

};




#endif //FSOFT2022_1A_5_EMPLOYEE_H

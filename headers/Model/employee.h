//
// Created by beatr on 08/06/2022.
//

#ifndef FSOFT2022_1A_5_EMPLOYEE_H
#define FSOFT2022_1A_5_EMPLOYEE_H

#include <string>
#include <iostream>

using namespace std;

class Employee{
private:
    string name;
    string specialty; //o que ele faz
    string store; //location
public:
    Employee(const string& name, const string& specialty, const string& store);
    Employee(const Employee& Employee);
    ~Employee();

    const string& getName() const;
    void setName(const string &name);

    //const string& getSpecialty() const;
    //void setSpecialty(string &specialty);

    //const string& getStore() const;
    //void setStore(string &store);

};




#endif //FSOFT2022_1A_5_EMPLOYEE_H

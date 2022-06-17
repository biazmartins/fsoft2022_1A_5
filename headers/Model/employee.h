

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
    Employee(string name,string specialty, string store);
    ~Employee();

    string getName() const;
    void setName(string name);

    string getSpecialty() const;
    void setSpecialty(string specialty);

    string getStore() const;
    void setStore(string store);

};

#endif // FSOFT2022_1A_5_EMPLOYEE_H

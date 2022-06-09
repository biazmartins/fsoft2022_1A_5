//
// Created by beatr on 08/06/2022.
//

#ifndef FSOFT2022_1A_5_PERSON_H
#define FSOFT2022_1A_5_PERSON_H

#include <string>

using namespace std;

class Person{
protected:
    string name;
    bool isNameValid(string name);
public:
    Person(string name);
    Person(Person const &person);
    ~Person();
    string getName() const;
    void setName(string name);
};

#endif //FSOFT2022_1A_5_PERSON_H

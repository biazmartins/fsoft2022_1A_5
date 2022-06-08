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
    bool isNameValid(const string& name);
public:
    Person(const string& name);
    Person(const Person& person);
    ~Person();
    const string& getName() const;
    void setName(const string& name);
};

#endif //FSOFT2022_1A_5_PERSON_H

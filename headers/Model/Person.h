#ifndef HEADERS_MODEL_PERSON_H
#define HEADERS_MODEL_PERSON_H

#include <string>
#include "Date.h"

using namespace std;

class Person{
protected:
    string name;
    bool isNameValid(string name);
public:
    Person(string name);
    Person();
    string getName() const;
    void setName(string name);
};

#endif //HEADERS_MODEL_PERSON_H

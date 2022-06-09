//
// Created by Ana Rita Maia Barbosa da Silva on 08/06/2022.
//

#ifndef FSOFT2022_1A_5_DATACONSISTENCYEXCEPTION_H
#define FSOFT2022_1A_5_DATACONSISTENCYEXCEPTION_H

#include <exception>
#include <string>

using namespace std;

class dataConsistencyException: public exception{
private:
    string data;
public:
    dataConsistencyException(string data);
    const char* what();
};

#endif //FSOFT2022_1A_5_DATACONSISTENCYEXCEPTION_H

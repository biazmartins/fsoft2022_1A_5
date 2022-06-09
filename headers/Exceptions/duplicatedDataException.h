//
// Created by Ana Rita Maia Barbosa da Silva on 08/06/2022.
//

#ifndef FSOFT2022_1A_5_DUPLICATEDDATAEXCEPTION_H
#define FSOFT2022_1A_5_DUPLICATEDDATAEXCEPTION_H

#include <exception>
#include <string>

using namespace std;

class duplicatedDataException: public exception{
private:
    string data;
public:
    duplicatedDataException(string data);
    const char* what();
};

#endif //FSOFT2022_1A_5_DUPLICATEDDATAEXCEPTION_H

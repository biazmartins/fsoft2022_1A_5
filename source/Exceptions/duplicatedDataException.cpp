//
// Created by Ana Rita Maia Barbosa da Silva on 04/06/2022.
//

#include "duplicatedDataException.h"

duplicatedDataException::duplicatedDataException(string data){
    this->data = "Error: duplicated!";
}

const char* duplicatedDataException::what(){
    return this->data.c_str();
}
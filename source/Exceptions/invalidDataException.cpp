//
// Created by Ana Rita Maia Barbosa da Silva on 04/06/2022.
//

#include "invalidaDataException.h"

invalidDataException::invalidDataException(string data){
    this->data = data;
}

const char* invalidDataException::what(){
    string msg = "Error: is not valid!";
    return msg.c_str();
}
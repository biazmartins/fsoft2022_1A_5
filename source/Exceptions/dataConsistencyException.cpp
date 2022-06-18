//
// Created by Ana Rita Maia Barbosa da Silva on 02/06/2022.
//

#include "dataConsistencyException.h"


dataConsistencyException::dataConsistencyException(string data){
    this->data = "Error: consistency!!";
}

const char* dataConsistencyException::what(){
    return this->data.c_str();
}
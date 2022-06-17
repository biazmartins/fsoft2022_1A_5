//
// Created by Ana Rita Maia Barbosa da Silva on 02/06/2022.
//

#include "DataConsistencyException.h"


DataConsistencyException::DataConsistencyException(string data){
    this->data = "Error: consistency!!";
}

const char* DataConsistencyException::what(){
    return this->data.c_str();
}
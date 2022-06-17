//
// Created by Ana Rita Maia Barbosa da Silva on 17/06/2022.
//

#include "/Users/anarita/Documents/GitHub/fsoft2022_1A_5/headers/Exceptions/invalidDataException.h"

invalidDataException::invalidDataException(string data){
    this->data = data;
}

const char* invalidDataEsception::what(){
    string msg = "Error: is not valid!";
        return msg.c_str();
}
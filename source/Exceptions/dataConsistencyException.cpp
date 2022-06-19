#include "dataConsistencyException.h"


dataConsistencyException::dataConsistencyException(string data){
    this->data = "Error: consistency!!";
}

const char* dataConsistencyException::what(){
    return this->data.c_str();
}
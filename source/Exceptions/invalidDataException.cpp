#include "invalidDataException.h"

invalidDataException::invalidDataException(string data){
    this->data = data;
}

const char* invalidDataException::what(){
    string msg = "Error: is not valid!";
        return msg.c_str();
}
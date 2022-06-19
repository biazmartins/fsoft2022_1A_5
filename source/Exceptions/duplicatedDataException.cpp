#include "duplicatedDataException.h"

duplicatedDataException::duplicatedDataException(string data){
    this->data = "Error: duplicated!";
}

const char* duplicatedDataException::what(){
    return this->data.c_str();
}

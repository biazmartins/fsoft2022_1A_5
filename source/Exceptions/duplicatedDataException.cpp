#include "/Users/anarita/Desktop/FSOFT3/fsoft2022_1A_5/headers/Exceptions/duplicatedDataException.h"

duplicatedDataException::duplicatedDataException(string data){
    this->data = "Error: duplicated!";
}

const char* duplicatedDataException::what(){
    return this->data.c_str();
}

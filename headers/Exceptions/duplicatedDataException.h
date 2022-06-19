#ifndef HEADERS_EXCEPTIONS_DUPLICATEDDATAEXCEPTION_H
#define HEADERS_EXCEPTIONS_DUPLICATEDDATAEXCEPTION_H

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

#endif //HEADERS_EXCEPTIONS_DUPLICATEDDATAEXCEPTION_H

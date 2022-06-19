#ifndef HEADERS_EXCEPTIONS_INVALIDDATAEXCEPTION_H
#define HEADERS_EXCEPTIONS_INVALIDDATAEXCEPTION_H

#include <exception>
#include <string>

using namespace std;

class invalidDataException: public exception{
private:
    string data;
public:
    invalidDataException(string data);
    const char* what();
};

#endif //HEADERS_EXCEPTIONS_INVALIDDATAEXCEPTION_H

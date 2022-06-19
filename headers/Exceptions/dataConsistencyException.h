#ifndef HEADERS_EXCEPTIONS_DATACONSISTENCYEXCEPTION_H
#define HEADERS_EXCEPTIONS_DATACONSISTENCYEXCEPTION_H

#include <exception>
#include <string>


using namespace std;

class dataConsistencyException: public exception{
private:
    string data;
public:
    dataConsistencyException(string data);
    const char* what();
};

#endif //HEADERS_EXCEPTIONS_DATACONSISTENCYEXCEPTION_H

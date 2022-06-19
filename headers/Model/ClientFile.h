#ifndef HEADERS_MODEL_CLIENTFILE_H
#define HEADERS_MODEL_CLIENTFILE_H

#include <iostream>
#include <string>

using namespace std;

class ClientFile{
private:
    string name;
    string email;
    int phone_number;

public:
    ClientFile(string name, string email, int phone_number);
    ClientFile(); //chamar o constructor ??

    string getName() const; //??
    void setName(string name); //?

    string getEmail() const;
    void setEmail(string email);

    int getPhoneNumber() const;
    void setPhoneNumber(int phone_number);

};

#endif //HEADERS_MODEL_CLIENTFILE_H

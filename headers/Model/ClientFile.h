#ifndef FSOFT2022_1A_5_CLIENTFILE_H
#define FSOFT2022_1A_5_CLIENTFILE_H

#include <iostream>
#include <string>

using namespace std;

class ClientFile{
private:
    string name;
    int phone_number;
    string email;

public:
    ClientFile(string name, string email, int phone_number);
    ClientFile();

    string getName() const;
    void setName(string name);

    string getEmail() const;
    void setEmail(string email);

    int getPhoneNumber() const;
    void setPhoneNumber(int phone_number);

};

#endif //FSOFT2022_1A_5_CLIENTFILE_H

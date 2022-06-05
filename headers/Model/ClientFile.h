//
// Created by Ana Rita Maia Barbosa da Silva on 04/06/2022.
//

#ifndef FSOFT2022_1A_5_CLIENTFILE_H
#define FSOFT2022_1A_5_CLIENTFILE_H

#include "Person.h"

class ClientFile : public Person{
private:
    static int NUMBER;
    int phone_number;
    char email;

public:
    ClientFile(const string& name, const string& email, const int& phone_number); //verificar se esta parte está bem, comparando com o código do professor
    ClientFile(const ClientFile& clientFile);
    ~ClientFile();
    const string& getEmail() const; //não tenho a certeza se a parte onde está "string&" está bem
    void setEmail(const string &birthday) //não tenho a certeza se o que está dentro de () está certo
    int getPhoneNumber() const; //não sei porque não declarou
    void setPhoneNumber(int phone_number);





#endif //FSOFT2022_1A_5_CLIENTFILE_H

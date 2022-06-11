#ifndef FSOFT2022_1A_5_CLIENTFILECONTAINER_H
#define FSOFT2022_1A_5_CLIENTFILECONTAINER_H

#include <list>
#include "ClientFile.h"

class ClientFileContainer{
private:
    list<ClientFile> clientFile;
    list<ClientFile>::iterator search(string name);
    list<ClientFile>::iterator search(int phone_number);
    list<ClientFile>::iterator search(const string& email);

public:
    list<ClientFile> getAll();
    ClientFile* get(string name);
    ClientFile* get(int phone_number);
    ClientFile* get(const string& email);

};




#endif //FSOFT2022_1A_5_CLIENTFILECONTAINER_H

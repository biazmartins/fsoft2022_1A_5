#ifndef HEADERS_MODEL_CLIENTFILECONTAINER_H
#define HEADERS_MODEL_CLIENTFILECONTAINER_H

#include <list>
#include "ClientFile.h"
#include "Date.h"

class ClientFileContainer{
private:
    list<ClientFile> clientFile;
    list<ClientFile>::iterator search(int phone_number);

public:
    list<ClientFile> getAll();

    void get(int phone_number);

    void add(ClientFile cliente);
    void remove(int phone_number);
    void update(int phone_number, string name, string email);

};

#endif //HEADERS_MODEL_CLIENTFILECONTAINER_H

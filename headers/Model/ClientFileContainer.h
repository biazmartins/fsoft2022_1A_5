#ifndef FSOFT2022_1A_5_CLIENTFILECONTAINER_H
#define FSOFT2022_1A_5_CLIENTFILECONTAINER_H

#include <list>
#include "ClientFile.h"
#include "Date.h"

class ClientFileContainer{
private:
    list<ClientFile> clientFile;
    list<ClientFile>::iterator search(int phone_number);

public:
    list<ClientFile> getAll();

    void add(ClientFile cliente);
    void remove(int phone_number);
    void update(int phone_number);

};

#endif //FSOFT2022_1A_5_CLIENTFILECONTAINER_H

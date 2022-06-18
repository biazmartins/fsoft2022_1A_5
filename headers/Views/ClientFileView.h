
#ifndef FSOFT2022_1A_5_CLIENTFILE_H
#define FSOFT2022_1A_5_CLIENTFILE_H

#include <list>
#include "ClientFile.h"

class ClientFileView{
public:
    ClientFile getClientFile(); //chama a função ClientFile(vai o cliente)
    void printClientFile(ClientFile *clientFile); //??
    void printClientsFile(list<ClientFile& clientFile); //??
};


#endif //FSOFT2022_1A_5_CLIENTFILE_H

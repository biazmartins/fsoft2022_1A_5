
#ifndef HEADERS_VIEWS_CLIENTFILEVIEW_H
#define HEADERS_VIEWS_CLIENTFILEVIEW_H

#include <list>
#include "ClientFile.h"

class ClientFileView{
public:
    ClientFile getClientFile(); //chama a função ClientFile(vai o cliente)
    void printClientFile(ClientFile *clientFile); //??
    void printClientsFile(list<ClientFile>& clientFile); //??
};


#endif //HEADERS_VIEWS_CLIENTFILEVIEW_H

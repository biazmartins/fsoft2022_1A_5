//
// Created by Ana Rita Maia Barbosa da Silva on 10/06/2022.
//

#ifndef FSOFT2022_1A_5_CLIENTFILE_H
#define FSOFT2022_1A_5_CLIENTFILE_H

#include <list>
#include "/Users/anarita/Desktop/FSOFT3/fsoft2022_1A_5/headers/Model/ClientFile.h"

class ClientFileView{
public:
    ClientFile getClientFile();
    void printClientFile(ClientFile *clientFile);
    void printClientsFile(list<ClientFile>& clientsFile);
};


#endif //FSOFT2022_1A_5_CLIENTFILE_H

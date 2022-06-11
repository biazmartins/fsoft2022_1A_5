//
// Created by Ana Rita Maia Barbosa da Silva on 06/06/2022.
//

#include <iostream>
#include "ClientFileView.h"
#include "Utils.h"
#include "invalidDataException.h"

using namespace std;

Number ClientFileView::getNumber(){
    int phone_number;
    bool flag = false;
    do{
        try{
            flag = false;
            cout<<"Phone Number"<<endl;
            int phone_number = Utils::getNumber ("Phone Number");
            number.setNumber(phone_number);
        }catch(invalidaDataException& e){
            flag = true;
        }
    }while (flag == true);
    return phone_number;
}

ClientFile ClientFileView::getClientFile(){
    int phone_number;
    char email;
    ClientFile clientFile ("Name", phone_number, email);
    bool flag = false;
    do{
        try{
            flag = false;
            cout<<"ClientFile"<<endl;
            string name = Utils::getString("name");
            clientFile.setName(name);
            stirng email = getString();    //?
            clientFile.setEmail(enail); //?
            int phone_number = Utils::getNumber("Phone Number");
            clientFile.setPhoneNumber(phone_number);
        }catch(invalidDataException& e){
            flag = true;
        }
    }while(flag == true);
    return clientFile;
}

void clientFileView::printClientFile(ClientFile *clientFile){
    cout<<clientFile->getPhoneNumber()<<":"<<endl;
    cout<<clientFile->getName()<<":"<<endl;
    cout<<clientFile->getEmail()<<":"<<endl;
}

void ClientFileView::printClientsFile(list<ClientFile>& clientsFile){
    for(list<ClientFile>::iterator it = students.begin(); it != clientsFile.end(); ++it){
        printClientFile(&*it);
    }
}












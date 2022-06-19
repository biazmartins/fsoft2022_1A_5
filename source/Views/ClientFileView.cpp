#include <iostream>
#include "ClientFileView.h"
#include "Utils.h"
#include "invalidDataException.h"

using namespace std;

ClientFile ClientFileView::getClientFile(){
    ClientFile clientFile("name", "email", 1);
    int phone_number;
    bool flag = false; //
    do{
        try{//fazer uma ação
            flag = false;
            cout<<"Phone Number"<<endl;
            string name = Utils::getString("name");
            string email = Utils::getString("email");
            int phone_number = Utils::getNumber ("Phone Number");
            clientFile.setPhoneNumber(phone_number); //?
        }catch(invalidDataException& e){ //verificação se o que fiz anteriormente é invalida
            flag = true;//se apanhar um erro
        }
    }while (flag == true);//ciclo que se repete, se os dados forem invalidos ele vai fazer o ciclo até serem validos, marca true sempre que os dados forem válidos
    return clientFile; //se for false, ou seja se os dados nao forem inválidos
}

void ClientFileView::printClientFile(ClientFile *clientFile){
    cout<<clientFile->getPhoneNumber()<<":"<<endl;
    cout<<clientFile->getName()<<":"<<endl;
    cout<<clientFile->getEmail()<<":"<<endl;
}

void ClientFileView::printClientsFile(list<ClientFile>& clientsFile){
    for(list<ClientFile>::iterator it = clientsFile.begin(); it != clientsFile.end(); ++it){
        printClientFile(&*it);
    }
}












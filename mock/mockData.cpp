//
// Created by Ana Rita Maia Barbosa da Silva on 05/06/2022.
//

#include "mockData.h"
#include "/Users/anarita/Desktop/FSOFT3/fsoft2022_1A_5/headers/Exceptions/duplicatedDataException.h"

/*
void mockData::insertClientFile(ClientFileContainer& container){
    for (size_t i = 0; i < name_client.size(); ++i){
        ClientFile obj (name_clientFile[i], email_clientFile[i], phone_number_clientFile[i]);
        try{
            container.add(obj);
        }catch(DuplicatedDataException& e){

        }
    }
}
*/

void mockData::insertClientsFile(ClientFileContainer& container){
    for(size_t i = 0; i < name_clientFile.size(); i++){
        ClientFile obj (name_clientFile[i], phone_number_clientFile[i], email_clientFile[i]);
        container.add(obj);
    }
}

void mockData::insertEmployee(EmployeeContainer& container){
    for (size_t i = 0; i < name_employee.size(); ++i){
        Employee obj (name_employee[i], specialty_employee[i], store[i]);
        container.add(obj);
    }
}



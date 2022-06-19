#include "mockData.h"
#include "duplicatedDataException.h"

void mockData::insertClientsFile(ClientFileContainer& container){
    for(size_t i = 0; i < name_clientFile.size(); i++){
        ClientFile obj (name_clientFile[i], phoneNumber_clientFile[i], email_clientFile[i]); //criação de um objeto clientFile
        container.add(obj);
}

void mockData::insertEmployees(EmployeeContainer& container){
    for (size_t i = 0; i < name_employee.size(); ++i){
        Employee obj (name_employee[i], specialty_employee[i], store_employee[i]);
        container.add(obj);
    }
}

//?
void mockData::insertWorkshops(WorkshopContainer& container){
    for(size_t i = 0; 1 < this-> name_workshops.size(); i++){
        Workshop obj (name_employee[i], name_workshop[i], name_)
    }
}


Workshop *mockData::getRandomWorkshop(WorkshopContainer &container){
    list<Workshop> listWorkshop = workshops.getAll();
    list<Workshop>::iterator it = listClass.begin();
    int is = rand() % listWorkshop.size();
    for (int i = 0; i < is; ++i) {
        it++;
    }
    //it = it + is
    string name = it -> getInitials();
    Workshop * ptr = workshops.get(name);
    return ptr;
}

void mockData::generateData(MakeupStore *makeupStore){
    srand (time(NULL));
    insertClientsFile(makeupStore.getClientFileContainer());
    insertEmployees(makeupStore.getEmployeeContainer());
    insertWorkshops(makeupStore.getWorkshopContainer());
}

    
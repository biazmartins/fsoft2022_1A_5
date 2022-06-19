#ifndef MOCK_MOCKDATA_H
#define MOCK__MOCKDATA_H

#include<string>
#include<vector>
#include "MakeupStore.h"

using namespace std;

class mockData{
private:
    const int WORKSHOP_NR = 3;
    const vector<string> name_employees ={"Rita", "Beatriz", "Bibi", "Anita", "Joana", "Luísa", "João", "Pedro", "Rui"};
    const vector<string> initial_employees ={"RT", "BEA", "BB", "ANT", "JON","LU", "J", "P", "R"};
    const vector<string> name_workshops ={"maquilhagem de olhos", "maquilhagem de lábios", "maquilhagem total"};

    Date genDate();

    void insertEmployees(EmployeeContainer& container);
    void insertClients(ClientFileContainer& container);
    Workshop * getRandomWorkshop(WorkshopContainer& Workshops);
    void insertWorkshops(EmployeeContainer& employee);

public:
    void generateData(MakeupStore& makeupStore);
};

#endif //MOCK_MOCKDATA_H

#ifndef FSOFT2022_1A_5_MOCKDATA_H
#define FSOFT2022_1A_5_MOCKDATA_H
#include<string>
#include<vector>

#include "MakeupStore.h"

using namespace std;

class mockData{
private:
    const int WORKSHOP_NR = 3;
    const vector<string> name_employees ={"Rita", "Beatriz", "Bibi", "Anita", "Joana", "Luísa"};
    const vector<string> initial_employees ={"RT", "BEA", "BB", "ANT", "JON","LU"};
    const vector<string> name_workshops ={"maquilhagem de olhos", "maquilhagem de lábios", "maquilhagem total"};

    Date genDate();

    void insertEmployees(EmployeeContainer& container);
    void insertClients(ClientFileContainer& container);
    Workshop * getRandomWorkshop(WorkshopContainer& Workshops);
    void insertWorkshops(EmployeeContainer& employee);

public:
    void generateData(MakeupStore& makeupStore);
};




#endif //FSOFT2022_1A_5_MOCKDATA_H

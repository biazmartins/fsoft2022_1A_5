#ifndef MOCK_MOCKDATA_H
#define MOCK__MOCKDATA_H

#include<string>
#include<vector>
#include "MakeupStore.h"

using namespace std;

class mockData{
private:
    const int WORKSHOP_NR = 7;
    const vector<string> name_clientFile = ("Ricardo", "André", "Maria");
    const vector<int> phoneNumber_clientFile = ("934738495", "947389653", "913472854");
    const vector<string> email_clientFile = ("123@gmail.com", "129@gmail.com", "103@gmail.com");
    const vector<string> specialty_employee = ("Manager", "Selling products", "Teaching");
    const vector<string> store_employee = ("Porto", "Lisboa", "Algarve");
    const vector<string> name_employees ={"Rita", "Beatriz", "Maria"};
    const vector<string> name_workshops ={"maquilhagem de olhos", "maquilhagem de lábios", "maquilhagem total"};

    Date genDate();

    void insertEmployees(EmployeeContainer& container);
    void insertClientsFile(ClientFileContainer& container);
    Workshop * getRandomWorkshop(WorkshopContainer& Workshops);
    void insertWorkshops(EmployeeContainer& employee);

public:
    void generateData(MakeupStore &makeupStore);
};

#endif //MOCK_MOCKDATA_H

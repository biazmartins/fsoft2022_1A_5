#include <iostream>
#include <string>
#include <tuple>
#include "controller.h"
#include "Utils.h"
#include "dataConsistencyException.h"

using namespace std;

Controller::Controller(MakeupStore &makeupStore){
    this->model = makeupStore; //vai buscar tudo o que esta no model
}

void Controller::run(){
    int option = -1;
    do {
        option = this->view.menuMakeupStore();
        switch (option) {
            case 1:
                runClientFile();
                break;
            case 2:
                runEmployees();
                break;
            case 3:
                runWorkshops();
                break;
        }
    }while(option != 0);
}

void Controller::runClientFile(){
    int option = -1;
    do{
        option = this->view.menuClientFile();
        switch (option) {
            case 1: {
                ClientFile/*constructor*/ clientFile/*objeto*/ = this->clientFileView.getClientFile();
                ClientFileContainer container = this->model.getClientFileContainer();
                container.add(clientFile);
            }
            break;
            case 2: {  //??
                try{
                    int phone_number = Utils::getNumber("Enter the client phone number.");
                    ClientFileContainer& container = this->model.getClientFileContainer();
                    container.remove(phone_number);
                }catch(dataConsistencyException& e){
                    string str(e.what());
                    cout<<str<<endl;
                }
            }
            break;

            case 3: {
                int phone_number = Utils::getNumber("Enter the Client Phone Number");
                ClientFileContainer container = this->model.getClientFileContainer();
                container.get(phone_number);
            }
            break;

            case 4:{
                int phone_number = Utils::getNumber ("Enter the client phone number.");
                string name = Utils::getString ("Enter the client name.");
                string email = Utils::getString ("Enter the client email.");
                ClientFileContainer& container = this->model.getClientFileContainer();
                container.update(phone_number, name, email);
            }
            break;
            case 5:{
                cout<<this->model.getName()<<endl;
                ClientFileContainer container = this->model.getClientFileContainer();
                list<ClientFile> clientFile = container.getAll();
                this->clientFileView.printClientsFile(clientsFile);
            }
            break;
            default:
                break;
        }
    }while(option != 0);
}

void Controller::runEmployees(){
    int option = -1;
    do{
        option = this->view.menuEmployees();

        switch(option){
            case 1: {
                Employee employee = this->employeeView.getEmployee();
                EmployeeContainer& container = this->model.getEmployeeContainer();
                container.add(employee);
            }
            break;
            case 2: {
                try{
                    string store = Utils::getString ("Enter the employee store.");
                    string specialty = Utils::getString ("Enter the employee specialty.");
                    EmployeeContainer container = this->model.getEmployeeContainer();
                    container.remove(store, specialty);
                }catch(dataConsistencyException& e){
                    string str(e.what());
                    cout<<str<<endl; //da print do erro
                }
            }
            break;

            case 3: {
                string store = Utils::getString("Enter the employee store");
                string specialty= Utils::getString("Enter the employee specialty");
                EmployeeContainer& container = this->model.getEmployeeContainer();
                container.get(store, specialty);
                break;

            case 4: {
                string name = Utils::getString ("Enter the employee name");
                string email = Utils::getString ("Enter the employee email");
                string specialty = Utils::getString ("Enter the employee specialty");
                string store = Utils::getString ("Enter the employee store");
                Date date = this->employeeView.getDate();
                EmployeeContainer& container = this->model.getEmployeeContainer();
                container.update(name, email, specialty, store, date);
            }
            break;

            case 5: {
                cout<<this->model.getName()<<endl;
                EmployeeContainer container = this->model.getEmployeeContainer();
                list<Employee> employees = container.getAll();
                this->employeeView.printEmployee(employees);
            }
            break;
            default:
                break;
        }
    }while(option != 0);
}

void Controller::runWorkshops(){
    int option = -1;
    do{
        option = this->view.menuWorkshop();

        switch(option){
            case 1: {
                
                Workshop workshop = this->workshop.getWorkshop();
                WorkshopContainer &container = this ->model.getWorkshopContainer();
                container.add(workshop);
            }
            break;
            case 2: {

            }
        }
    }
}
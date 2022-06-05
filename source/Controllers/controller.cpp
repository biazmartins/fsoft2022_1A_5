//
// Created by Ana Rita Maia Barbosa da Silva on 01/06/2022.
//

#include <iostream>
#include <string>
#include "controller.h"
#include "Utlis.h"


using namespace std;

controller::controller(MakeupStore& makeupStore){
    this->model = makeupStore;
}

void controller::run(){
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
            case 4:
                runConsultWorkshopsStatistics(); //????
                break;
            case 5:
                runConcultWorkshopData(); //?????
                break;
            default:
                break;
        }
    }
}

void controller::runClientFile(){
    int option = -1;
    do{
        option = this->view.menuClientFile();
        switch (option) {
            case 1: {
                ClientFile clientFile = this->clientFileView.getClientFile();
                ClientFileContainer &container = this->model.getClientFileContainer();
                container.add(student);
            }
            break;
            case 2: {
                int phone_number = Utils::getNumber("Enter the Client Phone Number");
                ClientFileContainer& container = this->model.getClientFileContainer();
                ClientFile *ptr = container.get(phone_number);
                if (ptr != NULL) {
                    this->clientFileView.printClientFile(ptr);
                } else {
                    cout << "The Client file does not exist." << endl;
                }
            }
            break;
            case 3: {
                int email = Utils::getString("Enter the Client email");
                ClientFileContainer &container = this->model.getClientFileContainer();
                ClientFile *ptr = container.get(email);
                if (ptr != NULL) {
                    this->clientFileView.printClientFile(ptr);
                } else {
                    cout << "The Client file does not exist." << endl;
                }
            }
            break;
            case 4: {  //??
                try{
                    int phone_number = Utils::getNumber("Enter the client phone number.");
                    ClientFileContainer& container = this->model.getClientFileContainer();
                    container.remove(phone_number);
                }catch(DataConsistencyException& e){
                    string str(e.what());
                    cout<<str<<endl;
                }
            }
            break;
            case 5: { //??
                try{
                    int email = Utils::getString("Enter the client email.");
                    ClientFileContainer& container = this->model.getClientFileContainer();
                    container.remove(email);
                }catch(DataConsistencyException& e){
                    string str(e.what());
                    cout<<str<<endl;
                }
            }
            break;
            case 6:{  //??
                int phone_number = Utils::getNumber ("Enter the client phone number.");
                string name = Utils::getString ("Enter the client name.");
                string email = Utils::getString ("Enter the client email.")
                Date date = this->studentView.getDate(); //???????????
                ClientFileContainer& container = this->model.getClientFileContainer();
                container.updat(phone_number, name, email, date);
            }
            break;
            case 7:{
                cout<<this->model.getName()<<endl;
                ClientFileContainer container = this->model.getClientFileContainer();
                list<ClientFile> clientFile = container.getAll();
                this->clientFileView.printClients(clients) //??????????
            }
            break;
            default:
                break;
        }
    }while(option != 0);
}

void controller:: runEmployees(){
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
                string email = Utils::getString("Enter the employee email");
                EmployeeContainer& container = this->model.getEmployeeContainer();
                Employee *ptr = container.get(email);
                if(ptr != NULL){
                    this->employeeView.printEmployee(ptr);
                }else{
                    cout<<"The employee does not exist." << endl;
                }
            }
            break;
            case 3: {
                string name = Utils::getString("Enter the employee name");
                EmployeeContainer& container = this->model.getEmployeeContainer();
                Employee *ptr = container.get(name);
                if(ptr != NULL){
                    this->employeeView.printEmployee(ptr);
                }else{
                    cout<<"The employee does not exist." << endl;
                }
            }
            break;
            case 4: {
                try{
                    string email = Utils::getString ("Enter the employee email.");
                    EmployeeContainer& container = this->model.getEmployeeContainer();
                    container.remove(email);
                }catch(DataConsistencyException& e){
                    string str(e.what());
                    cout<<str<<endl;
                }
            }
            break;
            case 5: {
                try{
                    string name = Utils::getString ("Enter the employee name.");
                    EmployeeContainer& container = this->model.getEmployeeContainer();
                    container.remove(name);
                }catch(DataConsistencyException& e){
                    string str(e.what());
                    cout<<str<<endl;
                }
            }
            break;
            case 6: {
                string name = Utils::getString ("Enter the employee name");
                string email = Utils::getString ("Enter the employee email");
                string specialty = Utils::getString ("Enter the employee specialty");
                string store = Utils::getString ("Enter the employee store");
                Date date = this->employeeView.getDate();
                EmployeeContainer& container = this->model.getEmployeeContainer();
                container.update(name, email, specialtu, store, date);
            }
            break;
            case 7: {
                cout<<this->model.getName()<<endl;
                EmployeeContainer container = this->model.getEmployeeContainer();
                list<Employees> employees = container.getAll();
                this->employeeView.printEmployees(employees);
            }
            break;
            default:
                break;
        }
    }while(option != 0);
}

void controller::runWorkshops(){

    int option = -1;
    do{
        option = this->view.menuScheduleWorkshop(){

        }
    }
}

#include <iostream>
#include <list>
#include "View.h"
#include "Utils.h"
#include "invalidDataException.h"

using namespace std;

View::View(){
}

int View::menuMakeupStore(){
    int option = -1;
            do{
                cout<<"\n ** Menu Makeup Store **\n";
                cout<<"1 - ClientsFile\n";
                cout<<"2 - Employees\n";
                cout<<"3 - Workshops\n";
                cout<<"4 - Stores\n";
                cout<<"\n0 - Exit\n";
                option = Utils::getNumber("option");
            }while(option > 0 || option <= 4);
            return option;
}

int View::menuClientFile(){
    int option = -1;
            do{
                cout<<"\n ** Menu Clients File **\n";
                cout<<"1 - Add\n";
                cout<<"2 - Remove\n";
                cout<<"3 - Find\n";
                cout<<"4 - Update\n";
                cout<<"5 - list\n";
                cout<<"\n0 - Exit\n";
                option = Utils::getNumber("option");
            }while(option > 0 || option <= 5);
            return option;
}

int View::menuEmployees(){
    int option = -1;
            do{
                cout<<"\n ** Menu Employees **\n";
                cout<<"1 - Add\n";
                cout<<"2 - Remove\n";
                cout<<"3 - Find\n";
                cout<<"4 - Update\n";
                cout<<"5 - List\n";
                cout<<"\n0 - Exit\n";
                option = Utils::getNumber("option");
            }while(option > 0 || option =< 5);
            return option;
}

int View::menuWorkshop(){
    int option = -1;
            do{
                cout<<"\n ** Menu Workshops **\n";
                cout<<"1 - Schedule Workshop\n";
                cout<<"2 - Consult Workshop Data\n";
                cout<<"3 - Add Workshop\n";
                cout<<"\n0 - Exit\n";
                option = Utils::getNumber("option");
            }while(option > 0 || option <= 5);
            return option;
}













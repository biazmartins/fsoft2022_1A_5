#include "menu.h"
#include <iostream>

using namespace std;

Menu::Menu(){
}

int Menu::menuMakeupStore() {
    int op = -1;

    do{
        cout<<"\n\n**Menu Makeup Store**\n";
        cout<<"1-Clients File\n";
        cout<<"2-Employees\n";
        cout<<"3-Store\n";
        cout<<"\n0-Exit\n";
        op = Utils::getNumber("Option");
    }
    while(op < 0  op > 3);
    return op;
}

int Menu::menuClientsFile() {
    int op = -1;
    do{
        cout<<"\n\n**Menu Clients File**\n";
        cout<<"1-Add\n";
        cout<<"2-Remove\n";
        cout<<"3-List\n";
        cout<<"\n0-Exit\n";
        op = Utils::getNumber("Option");
    }
    while(op < 0  op > 3);
    return op;
}

int Menu::menuEmployees() {
    int op = -1;
    do{
        cout<<"\n\n**Menu Employees**\n";
        cout<<"1-Add\n";
        cout<<"2-Remove\n";
        cout<<"3-List\n";
        cout<<"\n0-Exit\n";
        op = Utils::getNumber("Option");
    }
    while(op < 0  op > 3);
    return op;
}

int Menu::menuStore() {
    int op = -1;
    do{
        cout<<"\n\n**Menu Store**\n";
        cout<<"1-Clients\n";
        cout<<"2-Employees\n";
        cout<<"3-Workshops\n";
        cout<<"4-Location\n";
        cout<<"\n0-Exit\n";
        op = Utils::getNumber("Option");
    }
    while(op < 0  op > 4);
    return op;
}

int Menu::menuWorkshop() {
    int op = -1;
    do{
        cout<<"\n\n**Menu Workshop**\n";
        cout<<"1-Add\n";
        cout<<"2-Remove\n";
        cout<<"3-List\n";
        cout<<"\n0-Exit\n";
        op = Utils::getNumber("Option");
    }
    while(op < 0 || op > 3);
    return op;
}
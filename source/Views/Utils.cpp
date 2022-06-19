#include <iostream>
#include <limits>
#include "Utils.h"

using namespace std;

int Utils::getNumber(const string& label){
    int phone_number;
    bool flag = false;
    do{
        cout<<label<<": ";
        flag = false;
        cin >> phone_number;
        if(cin.fail()){
            cout<<"The number entered does not match a number" <<endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); //?
            flag = true;
        }
    }while(flag == true);
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    return phone_number;
}

string Utils::getString(const string& label){
    string input;
    cout<<label<<": ";
    getline(cin, input);
    return input;
}

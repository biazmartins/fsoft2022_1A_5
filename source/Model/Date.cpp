#include "Date.h"
#include <string>

using namespace std;

Date :: Date() { //cpnstructor vazio
    this->month = this->day=1;
    this->year = 1990;
}
Date :: Date(int day, int month, int year) { //contructor, o date é composto por um "day", um "month" e um "year"
    this->month = month;
    this->year = year;
    this->day = day;
}

void Date::getDate(){
    this ->date = date;
}

void Date::setDate(int day, int month, int year) { //setDate é para alterar ou adicionar uma data, neste casos alterar ou adicionar um dia/mês/ano
    this->month = month;
    this->year = year;
    this->day = day;
}
void Date::printDate() {
    cout << this->day << "/" << this->month << "/" << this->year << endl;
}

int Date::getDay() {
    return this->day;
}

int Date::getMonth() {
    return this->month;
}

int Date::getYear() {
    return this->year;
}

bool Date :: IsLeapYear (int year){
    if(year % 400 == 0)  // se o ano for multiplo de 400 é ano bissexto
        return true;

    if(year % 100 == 0) //se o ano for multiplo de 100 nao é ano bissexto
        return false;

    if(year % 4 == 0) //se o ano for multiplo de 4 é ano bissexto
        return true;
    return false;
}

int Date ::maxDays() {
    int max_day_value;


    if (this->month == 1 or this->month == 3 or this->month == 5 or this->month == 7 or this->month == 8 or this->month == 10 or this->month == 12){
        max_day_value = 31;
    }
    else if (this->month == 4 or this->month == 6 or this->month == 9 or this->month == 11){
        max_day_value = 30;
    }
    else if (this->IsLeapYear(this->year)){
        max_day_value = 29;
    }
    else{
        max_day_value = 28;
    }
    return max_day_value;
}
bool Date::operator>(Date d2) {
    if (this->year>d2.getYear()){
        return true;
    }
    if (this->year == d2.getYear() && this->month > d2.getMonth()){
        return true;
    }
    if (this->year == d2.getYear() && this->month == d2.getMonth() && this->day > d2.getDay()){
        return true;
    }
    return false;
}

bool Date::operator<(Date d2){
    if (this->year<d2.getYear()){
        return true;
    }
    if (this->year == d2.getYear() && this->month < d2.getMonth()){
        return true;
    }
    if (this->year == d2.getYear() && this->month == d2.getMonth() && this->day < d2.getDay()){
        return true;
    }
    return false;
}





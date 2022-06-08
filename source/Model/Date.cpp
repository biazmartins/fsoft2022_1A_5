

//codigo semelhante ao do stor


#include "Date.h"
#include "InvalideDataException.h"
#define <string>

using namespace std;

bool Date :: IsLeapYear (int year){
    if(year % 400 == 0)  // se o ano for multiplo de 400 é ano bissexto
        return true;

    if(year % 100 == 0) //se o ano for multiplo de 100 nao é ano bissexto
        return false;

    if(year % 4 == 0) //se o ano for multiplo de 4 é ano bissexto
        return true;
    return false;
}

bool Date :: IsDateValid(int day, int month, int year){
    bool result = true;
    if(day <= 0 || day > 31 || month <= 0 || month > 12){
        result = false;
    }else{
        switch(month){
            case 2:
                if (IsLeapYear(year) == true){
                    if(day > 29){
                        result = false;
                    }
                }else{
                    if(day = 29){
                        result = true;
                }
        }break;
            case 4:
            case 6:
            case 9:
            case 11:
                if(day > 30){
                    result = false;
                }
        }else{
            if(day = 30){
                result = true;
            }break;
        }
}
    return result;


Date :: Date(){
    setDate(1,1,1900);  //data default???
    }

Date :: Date(int day, int month, int year){
        setDate(day, month, year);
    }

Date :: Date(const Date& date){
        setDate(date.day, date.month, date.year);
    }

void Date :: AddDate(int day, int month, int year) {
    if (IsDateValid(day, month, year)) {
        this->day = day;
        this->month = month;
        this->year = year;
    }
    else{
        string msg =to_string(day)+ "/"+to_string(month)+"/"+to_string(year);
        throw InvalidDataException(msg);
    }
}

void Date :: GetDate(int& day, int& month, int& year) const{
    day = this->day;
    month = this->month;
    year = this->year;
}

bool Date :: operator == (const Date& obj) const{
    if(this->day == obj.day && this->month == obj.month && this->year == obj.year){
        return true;
    }
    return false;

bool Date :: operator > (const Date& obj) const{
    if(this->year > obj.year){
        return true;
    }
    if(this->month > obj.month){
        return true;
    }
    if(this->day > obj.day){
        return true;
    }
    return false;

bool Date :: operator > (const Date& obj) const{  // codigo mal entendido(nao entendi esta parte)
    if(*this == obj) {
        return false;
    }
    if(*this > obj) {
        return false;
    }
    return true;
}





}



#ifndef HEADERS_MODEL_DATE_H
#define HEADERS_MODEL_DATE_H

#include <iostream>
#include <string>


class Date{
private:
    int day;
    int month;
    int year;

public:
    Date();
    Date(int day, int month, int year);
    void setDate (int day, int month, int year);
    void printDate ();
    int getDay();
    int getMonth();
    int getYear();

    bool IsLeapYear(int year);
    int maxDays();

    bool operator == (Date d2);
    bool operator <  (Date d2);
    bool operator >  (Date d2);
};


#endif //HEADERS_MODEL_DATE_H

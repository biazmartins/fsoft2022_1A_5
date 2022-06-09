

#ifndef FSOFT2022_1A_5_DATE_H
#define FSOFT2022_1A_5_DATE_H

#include <iostream>
#include <string>


class Date{
private:
    int day;
    int month;
    int year;

public:
    Date()
    Date(int day, int month, int year);
    void AddDate (int day, int month, int year);
    void GetDate ();

    bool IsLeapYear(int year);
    bool IsValid(int day, int month,int year);

    bool operator == (Date obj);
    bool operator <  (Date obj);
    bool operator >  (Date obj);
};


#endif //FSOFT2022_1A_5_DATE_H

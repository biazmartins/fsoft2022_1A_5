#include <iostream>
#include <string>


#ifndef FSOFT2022_1A_5_DATE_H
#define FSOFT2022_1A_5_DATE_H

class Date{
private:
    int day;
    int month;
    int year;
    bool IsLeapYear(int year);
    bool IsValid(int day, int month,int year);

public:
    Date()
    Date(int day, int month, int year);
    Date(const Date & date);
    void AddDate (int day, int month, int year);
    void GetDate (int& day, int& month, int& year) const;

    bool operator == (consta Date& obj) const;
    bool operator < (consta Date& obj) const;
    bool operator > (consta Date& obj) const;
};


#endif //FSOFT2022_1A_5_DATE_H

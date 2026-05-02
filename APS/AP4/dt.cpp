#include <iostream>
#include <ctime>
#include "Date.h"

using namespace std;

void Date::print(void){
    cout << month << '-' << day << '-' << year << endl;
}

void Date::init(int day, int month, int year){
    this->day = day;
    this->month = month;
    this->year = year;
}

void Date::init(void){
    time_t sec;
    time(&sec);

    struct tm *ptr = localtime(&sec);

    day = ptr->tm_mday;
    month = ptr->tm_mon + 1;  // +1 pq conta de 0 a 11
    year = ptr->tm_year+1900; // +1900 pq conta os anos desde 1900
}
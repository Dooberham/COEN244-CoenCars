//
// Created by Niall Cunningham on 2025-02-15.
//

#include "Date.h"
// Class composition: Class Date uses an object of class Time.

#include <iostream>
using namespace std;


Date::Date() {
    day = 0;
    month = 0;
    year = 0;
    time.setTime(0,0,0);
}
Date::Date(int d, int m, int y) {
    day = d;
    month = m;
    year = y;
    time.setTime(0,0,0); // default time of 00:00:00
}
Date::Date(int d, int m, int y, int hour, int min, int sec) {
    day = d;
    month = m;
    year = y ;
    time.setTime(hour, min, sec);
}

void Date::printDate() const {
    cout << month << "/" << day << "/" << year << " ";
    time.printTime() ;
}
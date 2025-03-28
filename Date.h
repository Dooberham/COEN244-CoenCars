//
// Created by Niall Cunningham on 2025-02-15.
//
//Niall Cunningham
//40227080
#ifndef DATE_H
#define DATE_H
#include "Time.h"



class Date {
public:
    Date();
    Date(int, int, int); //constructor with day, month, year
    Date(int, int, int, int, int, int);   // sets day, month, year, hours, minutes, seconds
    void printDate() const;   	    // print date to the screen

private:
    int day, month, year;
    Time time;   // a component object
};
#endif //DATE_H

//
// Created by Niall Cunningham on 2025-02-15.
//

#include "Time.h"
#include <iostream>
//Niall Cunningham
//40227080
using namespace std;
Time::Time() {
    hour = 0;
    minute = 0;
    second = 0;
}

void Time::setTime(int h, int m, int s) {
    hour = ( h >= 0 && h < 24 ) ? h : 0;
    minute = ( m >= 0 && m < 60 ) ? m : 0;
    second = ( s >= 0 && s < 60 ) ? s : 0;
}

void Time::printTime() const {
    cout << hour << ":" << minute << ":" << second << endl;
}

//
// Created by Niall Cunningham on 2025-02-15.
//

#ifndef TIME_H
#define TIME_H
class Time {
public:
    Time();
    void setTime( int, int ,int );
    void printTime() const;

private:
    int hour, minute, second;
};
#endif //TIME_H

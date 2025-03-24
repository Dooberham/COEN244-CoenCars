//
// Created by Niall Cunningham on 2025-03-11.
//

#ifndef COENCARS_CAR_H
#define COENCARS_CAR_H
#include <iostream>
using namespace::std;
#include "Date.h"
class Car {
public:
    Car();
    Car(int, string);
    Car(const Car&);
    virtual void print() const = 0;
    virtual ~Car();

    int getId() const;
    string getType() const;
    bool getAvailable() const;

    void setAvailability(bool);

    void setDates(Date, Date);

    Date getRentalDate() const;
    Date getReturnDate() const;

protected:
    int id;
    string type;
    bool available;
    Date rentalDate;
    Date returnDate;


};
#endif //COENCARS_CAR_H

//
// Created by Niall Cunningham on 2025-03-11.
//

#ifndef COENCARS_CAR_H
#define COENCARS_CAR_H
#include <iostream>
using namespace::std;
#include "Date.h"
class Customer;

class Car {
public:
    Car();
    Car(int);
    Car(const Car&);
    virtual void print() const = 0;
    virtual ~Car();
    virtual Car* copy() const =0;

    int getId() const;
    string getType() const;
    bool getAvailability() const;

    void setAvailability(bool);

    void setDates(Date, Date);

    Date getRentalDate() const;
    Date getReturnDate() const;

    void setRenter(Customer*);
    Customer* getRenter();

protected:
    int id;
    string type;
    bool available;
    Date rentalDate;
    Date returnDate;
    Customer* renter;

};
#endif //COENCARS_CAR_H

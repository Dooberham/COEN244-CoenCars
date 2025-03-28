//
// Created by Niall Cunningham on 2025-03-11.
//
//Niall Cunningham
//40227080
#ifndef COENCARS_CAR_H
#define COENCARS_CAR_H
#include <iostream>
using namespace::std;
#include "Date.h"
class Customer;

class Car {
public:
    Car(); // Default constructor
    Car(int); // Constructor with id
    Car(const Car&); // Copy constructor
    virtual void print() const = 0; // Pure virtual function to print car details
    virtual ~Car(); // Destructor
    virtual Car* copy() const =0; // Pure virtual function to create a copy of the car object

    int getId() const; // Get the car ID
    string getType() const; // Get the car type
    bool getAvailability() const; // Get the car availability

    void setAvailability(bool); // Set the car availability

    void setDates(Date, Date); // Set the rental and return dates

    Date getRentalDate() const; // Get the rental date
    Date getReturnDate() const; // Get the return date

    void setRenter(Customer*); // Set the renter of the car
    Customer* getRenter(); // Get the renter of the car

protected:
    int id; // Car ID
    string type; // Car type
    bool available; // Car availability
    Date rentalDate; // Rental date
    Date returnDate; // Return date
    Customer* renter; // Pointer to the customer who rented the car

};
#endif //COENCARS_CAR_H

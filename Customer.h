//
// Created by Niall Cunningham on 2025-03-21.
//
//Niall Cunningham
//40227080
#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <iostream>
#include "Car.h"
using namespace std;
class Customer {
public:
    Customer(); // Default constructor
    Customer(int, const string &, const string &, const string &); // constructor with parameters
    Customer(const Customer&); // Copy constructor
    virtual ~Customer(); // Destructor


    int getId() const; // Returns the customer ID
    string getName() const; // Returns the customer name
    string getAddress() const; // Returns the customer address
    string getPhone() const; // Returns the customer phone number
    int getLimit() const; // Returns the rental limit

    void rent(Car*, const Date &, const Date &); // Rent a car
    void returnCar(int); // Return a car
    void listCars() const; // List all rented cars
    void searchCars(int) const; // Search for a car by ID

    virtual void print() const = 0; // Print customer details


protected:
    int customerID; // Customer ID
    string name; // Customer name
    string address; // Customer address
    string phone; // Customer phone number
    int limit; // Rental limit
    int numCars; // Number of rented cars
    Car **cars; // Array of rented cars
};
#endif //CUSTOMER_H

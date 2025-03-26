//
// Created by Niall Cunningham on 2025-03-24.
//

#include "RegularCustomer.h"

RegularCustomer::RegularCustomer():Customer() { // default constructor
    limit = 1;// set default limit to 1
    cars = new Car*[limit];  // allocate memory for cars array
}

RegularCustomer::RegularCustomer(const int id1, const string &name1, const string &address1, const string &phone1):Customer(id1, name1, address1, phone1) { // constructor with parameters
    limit = 1; // set default limit to 1
    cars = new Car*[limit]; // allocate memory for cars array
}

RegularCustomer::RegularCustomer(const RegularCustomer& c): Customer(c) { // copy constructor
    cars = new Car*[limit]; // allocate memory for cars array
    for (int i = 0; i < numCars; i++) {
        cars[i] = c.cars[i]->copy(); // copy the car
        cars[i] ->setRenter(this); // set the renter to this customer
    }
}

void RegularCustomer::print() const { // print function
    cout << "ID: " << customerID;
    cout << "Name: " << name;
    cout << "Address: " << address;
    cout << "Phone Number: " << phone;

}

RegularCustomer::~RegularCustomer() {} // destructor, base class destructor will be called automatically
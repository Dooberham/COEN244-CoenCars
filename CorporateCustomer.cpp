//
// Created by Niall Cunningham on 2025-03-24.
//

#include "CorporateCustomer.h"

CorporateCustomer::CorporateCustomer():Customer() {
    limit = 20; // Default limit for corporate customers
    cars = new Car*[limit]; // Allocate memory for car pointers
}

CorporateCustomer::CorporateCustomer(const int id1, const string &name1, const string &address1, const string &phone1):Customer(id1, name1, address1, phone1) {
    limit = 20; // Default limit for corporate customers
    cars = new Car*[limit]; // Allocate memory for car pointers
}

CorporateCustomer::CorporateCustomer(const CorporateCustomer& c): Customer(c) {
    cars = new Car*[limit]; // Allocate memory for car pointers
    for (int i = 0; i < numCars; i++) {
        cars[i] = c.cars[i]->copy(); // Copy the car object
        cars[i] ->setRenter(this); // Set the renter to this corporate customer
    }
}

void CorporateCustomer::print() const {  // Print function
    cout << "ID: " << customerID;
    cout << "Name: " << name;
    cout << "Address: " << address;
    cout << "Phone: " << phone;

}

CorporateCustomer::~CorporateCustomer() {} // Destructor already defined in Customer class
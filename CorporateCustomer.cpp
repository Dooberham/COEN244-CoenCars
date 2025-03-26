//
// Created by Niall Cunningham on 2025-03-24.
//

#include "CorporateCustomer.h"

CorporateCustomer::CorporateCustomer():Customer() {
    limit = 20;
    cars = new Car*[limit];
}

CorporateCustomer::CorporateCustomer(const int id1, const string &name1, const string &address1, const string &phone1):Customer(id1, name1, address1, phone1) {
    limit = 20;
    cars = new Car*[limit];
}

CorporateCustomer::CorporateCustomer(const CorporateCustomer& c): Customer(c) {
    cars = new Car*[limit];
    for (int i = 0; i < numCars; i++) {
        cars[i] = c.cars[i]->copy();
        cars[i] ->setRenter(this);
    }
}

void CorporateCustomer::print() const {
    cout << "ID: " << customerID;
    cout << "Name: " << name;
    cout << "Address: " << address;
    cout << "Phone: " << phone;

}

CorporateCustomer::~CorporateCustomer() {}
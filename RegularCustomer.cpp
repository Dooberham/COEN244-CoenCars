//
// Created by Niall Cunningham on 2025-03-24.
//

#include "RegularCustomer.h"

RegularCustomer::RegularCustomer():Customer() {
    limit = 1;
    cars = new Car*[limit];
}

RegularCustomer::RegularCustomer(const int id1, const string &name1, const string &address1, const string &phone1):Customer(id1, name1, address1, phone1) {
    limit = 1;
    cars = new Car*[limit];
}

RegularCustomer::RegularCustomer(RegularCustomer&): Customer() {}

void RegularCustomer::print() const {
    cout << "ID: " << customerID;
    cout << "Name: " << name;
    cout << "Address: " << address;
    cout << "Phone Number: " << phone;

}

RegularCustomer::~RegularCustomer() {}
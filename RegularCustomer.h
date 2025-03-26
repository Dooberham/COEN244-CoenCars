//
// Created by Niall Cunningham on 2025-03-24.
//

#ifndef COENCARS_REGULARCUSTOMER_H
#define COENCARS_REGULARCUSTOMER_H
#include "Customer.h"
class RegularCustomer: public Customer {
public:
    RegularCustomer(); // default constructor

    RegularCustomer(int, const string &, const string &, const string &); // constructor with parameters
    RegularCustomer(const RegularCustomer&); // copy constructor

    ~RegularCustomer(); // destructor

    virtual void print() const; // print function

};
#endif //COENCARS_REGULARCUSTOMER_H

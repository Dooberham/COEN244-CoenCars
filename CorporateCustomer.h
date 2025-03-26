//
// Created by Niall Cunningham on 2025-03-24.
//

#ifndef COENCARS_CORPORATECUSTOMER_H
#define COENCARS_CORPORATECUSTOMER_H
#include "Customer.h"
class CorporateCustomer: public Customer { // Inherits from Customer
public:
    CorporateCustomer(); // Default constructor

    CorporateCustomer(int, const string &, const string &, const string &); // Constructor with parameters
    CorporateCustomer(const CorporateCustomer&); // Copy constructor

    ~CorporateCustomer(); // Destructor

    virtual void print() const; // Print function

};
#endif //COENCARS_CORPORATECUSTOMER_H

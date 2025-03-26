//
// Created by Niall Cunningham on 2025-03-24.
//

#ifndef COENCARS_CORPORATECUSTOMER_H
#define COENCARS_CORPORATECUSTOMER_H
#include "Customer.h"
class CorporateCustomer: public Customer {
public:
    CorporateCustomer();

    CorporateCustomer(int, const string &, const string &, const string &);
    CorporateCustomer(const CorporateCustomer&);

    ~CorporateCustomer();

    virtual void print() const;

};
#endif //COENCARS_CORPORATECUSTOMER_H

//
// Created by Niall Cunningham on 2025-03-24.
//

#ifndef COENCARS_REGULARCUSTOMER_H
#define COENCARS_REGULARCUSTOMER_H
#include "Customer.h"
class RegularCustomer: public Customer {
public:
    RegularCustomer();

    RegularCustomer(int, const string &, const string &, const string &);
    RegularCustomer(RegularCustomer&);

    ~RegularCustomer();

    virtual void print() const;

};
#endif //COENCARS_REGULARCUSTOMER_H

//
// Created by Niall Cunningham on 2025-03-24.
//

#include "CorporateCustomer.h"

CorporateCustomer::CorporateCustomer():Customer() {
    limit = 20;
}

CorporateCustomer::CorporateCustomer(int id1, string name1, string address1, string phone1):Customer(id1, name1, address1, phone1) {
    limit = 20;
}

CorporateCustomer::CorporateCustomer(CorporateCustomer&): Customer() {}

void CorporateCustomer::print() const {
    cout << "Name: " << name;
}

CorporateCustomer::~CorporateCustomer() {
    delete[] cars;
}
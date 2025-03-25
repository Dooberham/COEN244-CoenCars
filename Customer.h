//
// Created by Niall Cunningham on 2025-03-21.
//

#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <iostream>
#include "Car.h"
using namespace std;
class Customer {
public:
    Customer();
    Customer(int, const string &, const string &, const string &);
    Customer(Customer&);
    virtual ~Customer();


    int getId() const;
    string getName() const;
    string getAddress() const;
    string getPhone() const;
    int getLimit() const;

    void rent(Car*, const Date &, const Date &);
    void returnCar(int);
    void listCars() const;
    void searchCars(int) const;

    virtual void print() const = 0;


protected:
    int customerID;
    string name;
    string address;
    string phone;
    int limit;
    int numCars;
    Car **cars;
};
#endif //CUSTOMER_H

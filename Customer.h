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
    Customer(int, string, string, string);
    Customer(Customer&);
    ~Customer();


    int getId() const;
    string getName() const;
    string getAddress() const;
    string getPhone() const;
    int getLimit() const;

    void rent(Car*, Date, Date);
    void returnCar(int);
    void listCars() const;
    void searchCars(int) const;

    void print();


protected:
    int customerID;
    string name;
    string address;
    string phone;
    int limit =1;
    int numCars;
    Car **cars;
};
#endif //CUSTOMER_H

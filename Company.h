//
// Created by Niall Cunningham on 2025-03-14.
//

#ifndef COMPANY_H
#define COMPANY_H
#include "Car.h"
class Company {
public:
    Company();
    Company(const Company&);

    void addCar(Car *);
    void removeCar(const int&);
    bool searchCar(const int&) const;
    void listAllCars() const;

    ~Company();


private:
    Car** cars;
    int numCars;
    int maxCars = 1000;



};
#endif //COMPANY_H

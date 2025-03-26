//
// Created by Niall Cunningham on 2025-03-14.
//

#ifndef COMPANY_H
#define COMPANY_H
#include "Car.h"
class Company {
public:
    Company(); // Default constructor
    Company(const Company&); // Copy constructor

    void addCar(Car *); // Add a car to the company
    void removeCar(const int&); // Remove a car from the company
    bool searchCar(const int&) const; // Search for a car by ID
    void listAllCars() const; // List all cars in the company

    ~Company(); // Destructor


private:
    Car** cars; // Array of pointers to Car objects
    int numCars; // Number of cars in the company
    int maxCars = 1000; // Maximum number of cars



};
#endif //COMPANY_H

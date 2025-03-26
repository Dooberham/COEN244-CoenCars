//
// Created by Niall Cunningham on 2025-03-14.
//

#include "Company.h"

Company::Company() { // Default constructor
    numCars = 0; // Initialize number of cars to 0
    cars = new Car*[maxCars]; // Allocate memory for the array of car pointers

}

Company::Company(const Company& c)  { // Copy constructor
    numCars = c.numCars;
    cars = new Car*[maxCars]; // Allocate memory for the array of car pointers
    for (int i=0; i < numCars; i++) {
        cars[i] = c.cars[i]->copy(); // Use the copy method of the Car class to create a new car object
    }
}

Company::~Company() {
    delete[] cars; // Deallocate memory for the array of car pointers
}

void Company::addCar(Car* car) { // Add a car to the company
    if (numCars < maxCars) {
        for (int i =0; i < numCars; i++) {  // Check if the car already exists
            if (cars[i]->getId() == car->getId()) {
                cout << "Car " << car->getId() << " already exists." << endl;
                return;
            }

        }
        cars[numCars] = car; // Add the car to the array
        numCars++; // Increment the number of cars
    }
}

void Company::removeCar(const int& carID) { // Remove a car from the company
    for (int i = 0; i< numCars; i++) { // Loop through the array of cars
        if (cars[i] -> getId() == carID) { // Check if the car ID matches
            if (!cars[i]->getAvailability()) { // Check if the car is available
                cout << "Car " << carID << " is currently rented and cannot be removed." << endl;
                return;
            }
            for (int j = i; j < numCars - 1; j++) { // Shift the cars down
                cars[j] = cars[j + 1];
            }
            numCars--;
            return;
        }
        cout << "Car " << carID << " not found." << endl;
    }
}

void Company::listAllCars() const { // List all cars in the company
    for (int i = 0; i < numCars; i++) {
        cars[i]->print();
    }
}

bool Company::searchCar(const int& id) const { // Search for a car by ID
    for (int i = 0; i < numCars; i++) {
        if (cars[i]->getId() == id) { // Check if the car ID matches
            return true;
        }
    }
    return false;
}


//
// Created by Niall Cunningham on 2025-03-14.
//

#include "Company.h"

Company::Company() {
    numCars = 0;
    cars = new Car*[maxCars];

}

Company::Company(const Company& c) {
    numCars = c.numCars;
    cars = new Car*[maxCars];
    for (int i=0; i < numCars; i++) {
        cars[i] = c.cars[i]->copy();
    }
}

Company::~Company() {
    delete[] cars;
}

void Company::addCar(Car* car) {
    if (numCars < maxCars) {
        for (int i =0; i < numCars; i++) {
            if (cars[i]->getId() == car->getId()) {
                cout << "Car " << car->getId() << " already exists." << endl;
                return;
            }

        }
        cars[numCars] = car;
        numCars++;
    }
}

void Company::removeCar(const int& carID) {
    for (int i = 0; i< numCars; i++) {
        if (cars[i] -> getId() == carID) {
            for (int j = i; j < numCars - 1; j++) {
                cars[j] = cars[j + 1];
            }
            numCars--;
            return;
        }
        cout << "Car " << carID << " not found." << endl;
    }
}

void Company::listAllCars() const {
    for (int i = 0; i < numCars; i++) {
        cars[i]->print();
    }
}

bool Company::searchCar(const int& id) const {
    for (int i = 0; i < numCars; i++) {
        if (cars[i]->getId() == id) {
            return true;
        }
    }
    return false;
}


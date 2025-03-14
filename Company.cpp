//
// Created by Niall Cunningham on 2025-03-14.
//

#include "Company.h"

Company::Company() {
    numCars = 0;
    cars = new Car*[maxCars];

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


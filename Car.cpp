//
// Created by Niall Cunningham on 2025-03-11.
//

#include "Car.h"

Car::Car() {
    id = 0;
    type = "";
    available = true;
}

Car::~Car() {

}


Car::Car(int id1, string type1) {
    id = id1;
    type = type1;
    available = true;
}

Car::Car(const Car& car) {
    id = car.id;
    type = car.type;
    available = car.available;
}

int Car::getId() const {
    return id;
}

string Car::getType() const {
    return type;
}

bool Car::getAvailable() const {
    return available;
}

void Car::setAvailability(bool available1) {
    available = available1;
}


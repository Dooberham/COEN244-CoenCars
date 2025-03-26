//
// Created by Niall Cunningham on 2025-03-11.
//

#include "Car.h"
#include "CorporateCustomer.h"
Car::Car() {
    id = 0;
    available = true;
    renter = nullptr;

}

Car::~Car() {
}


Car::Car(int id1) {
    id = id1;
    available = true;
    renter = nullptr;

}


Car::Car(const Car& car) {
    id = car.id;
    type = car.type;
    available = car.available;
    renter = car.renter;
    rentalDate = car.rentalDate;
    returnDate = car.returnDate;
}


int Car::getId() const {
    return id;
}

string Car::getType() const {
    return type;
}

bool Car::getAvailability() const {
    return available;
}

void Car::setAvailability(bool available1) {
    available = available1;
}

void Car::setDates(Date date1, Date date2) {
    rentalDate = date1;
    returnDate = date2;
}

Date Car::getRentalDate() const {
    return rentalDate;
}

Date Car::getReturnDate() const {
    return returnDate;
}

void Car::setRenter(Customer * c) {
    renter = c;
}

Customer* Car::getRenter() {
    if (renter == nullptr) {
        static CorporateCustomer emptyCustomer; //To prevent memory access violations, an empty customer is initialized at compile time
        cout <<"this car is not rented to anyone."<< endl;
        return &emptyCustomer;
    }
    return renter;
}
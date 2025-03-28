//
// Created by Niall Cunningham on 2025-03-11.
//

#include "Car.h"
#include "CorporateCustomer.h"
//Niall Cunningham
//40227080
Car::Car() {
    id = 0; // Default ID
    available = true; // Default to available
    renter = nullptr; // Initialize renter to nullptr to avoid issues with getRenter

}

Car::~Car() {
}


Car::Car(int id1) {
    id = id1; // Set the ID
    available = true; // Default to available
    renter = nullptr; // Initialize renter to nullptr to avoid issues with getRenter

}


Car::Car(const Car& car) { // Copy constructor
    id = car.id;
    type = car.type;
    available = car.available;
    renter = car.renter;
    rentalDate = car.rentalDate;
    returnDate = car.returnDate;
}


int Car::getId() const { // Get the car ID
    return id;
}

string Car::getType() const { // Get the car type
    return type;
}

bool Car::getAvailability() const { // Get the car availability
    return available;
}

void Car::setAvailability(bool available1) { // Set the car availability
    available = available1;
}

void Car::setDates(Date date1, Date date2) { // Set the rental and return dates
    rentalDate = date1;
    returnDate = date2;
}

Date Car::getRentalDate() const { // Get the rental date
    return rentalDate;
}

Date Car::getReturnDate() const { // Get the return date
    return returnDate;
}

void Car::setRenter(Customer * c) { // Set the renter of the car
    renter = c;
}

Customer* Car::getRenter() { // Get the renter of the car
    if (renter == nullptr) { // If the car is not rented, return an empty customer
        static CorporateCustomer emptyCustomer; //To prevent memory access violations, an empty customer is initialized at compile time
        cout <<"this car is not rented to anyone."<< endl;
        return &emptyCustomer;
    }
    return renter;
}
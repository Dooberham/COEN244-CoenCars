//
// Created by Niall Cunningham on 2025-03-21.
//

#include "Customer.h"

Customer::Customer() {
    customerID = 0;
    name = "";
    address = "";
    phone = "";
    numCars = 0;
    cars = new Car*[1];

}

Customer::Customer(int id1, string name1, string address1, string phone1) {
    customerID = id1;
    name = name1;
    address = address1;
    phone = phone1;
    numCars = 0;
    cars = new Car*[1];
}

Customer::~Customer() {
    delete[] cars;
}

int Customer::getId() const {
    return customerID;
}

string Customer::getName() const {
    return name;
}

string Customer::getAddress() const {
    return address;
}

string Customer::getPhone() const {
    return phone;
}

int Customer::getLimit() const {
    return limit;
}

void Customer::rent(Car* car, Date rentalDate, Date returnDate) {
    if (numCars < limit) {
        if (car->getAvailability()) {
            cars[numCars] = car;
            numCars++;
            car->setAvailability(false);
            car->setDates(rentalDate, returnDate);
            car->setRenter(this);
            return;
        }
        else {
            cout << "This car is not available." << endl;
            return;
        }

    }
    else {
        cout << "This customer has rented too many cars." << endl;
    }
}

void Customer::returnCar(int id) {
    for ( int i = 0; i < numCars; i++) {
        if (id == cars[i] -> getId()) {
            cars[i] -> setAvailability(true);
            cars[i] ->setRenter(nullptr);
            cars[i] ->setDates(Date(), Date());
            cars[i] = cars[numCars-1];

            numCars--;
            return;

        }
    }
    cout << "Car not found." << endl;
}

void Customer::listCars() const {
    cout << "Rented Cars:" << endl;
    for (int i = 0; i < numCars; i++) {
        cars[i] -> print();
    }
}

void Customer::searchCars(int id) const {
    for ( int i = 0; i < numCars; i++) {
        if (id == cars[i] -> getId()) {

        }
    }
}
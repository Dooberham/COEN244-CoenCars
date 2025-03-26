//
// Created by Niall Cunningham on 2025-03-21.
//

#include "Customer.h"

Customer::Customer() { // Default constructor
    customerID = 0;
    name = "";
    address = "";
    phone = "";
    numCars = 0;

}

Customer::Customer(const int id1, const string &name1, const string &address1, const string &phone1) { // Constructor with parameters
    customerID = id1;
    name = name1;
    address = address1;
    phone = phone1;
    numCars = 0;

}
Customer::Customer(const Customer & c) { // Copy constructor
    customerID = c.customerID;
    name = c.name;
    address = c.address;
    phone = c.phone;
    numCars = c.numCars;
    limit = c.limit;

}

Customer::~Customer() { // Destructor
    delete[] cars; // deallocate the array of rented cars
}

int Customer::getId() const { // Returns the customer ID
    return customerID;
}

string Customer::getName() const { // Returns the customer name
    return name;
}

string Customer::getAddress() const { // Returns the customer address
    return address;
}

string Customer::getPhone() const { // Returns the customer phone number
    return phone;
}

int Customer::getLimit() const { // Returns the rental limit
    return limit;
}

void Customer::rent(Car* car, const Date &rentalDate, const Date &returnDate) { // Rent a car
    if (numCars < limit) { // Check if the customer has reached their rental limit
        if (car->getAvailability()) { // Check if the car is available
            cars[numCars] = car; // Add the car to the array of rented cars
            numCars++; // Increment the number of rented cars
            car->setAvailability(false); // Set the car as unavailable
            car->setDates(rentalDate, returnDate); // Set the rental and return dates
            car->setRenter(this); // Set the customer as the renter

        }
        else {
            cout << "This car is not available." << endl;

        }

    }
    else {
        cout << "This customer cannot rent any more cars." << endl;
    }
}

void Customer::returnCar(const int id) { // Return a car
    for ( int i = 0; i < numCars; i++) {
        if (id == cars[i] -> getId()) { // Check if the car ID matches
            cars[i] -> setAvailability(true);  // Set the car as available
            cars[i] ->setRenter(nullptr); // Set the renter to null
            cars[i] ->setDates(Date(), Date()); // Reset the rental and return dates
            cars[i] = cars[numCars-1]; // Move the last car to the current position

            numCars--;
            return;

        }
    }
    cout << "Car not found." << endl;
}

void Customer::listCars() const { // List all rented cars
    cout << "Number of rented cars: " << numCars << endl;
    for (int i = 0; i < numCars; i++) {  // loop through the rented cars
        cars[i] -> print(); // Print the car details
    }
}

void Customer::searchCars(const int id) const { // Search for a car by ID
    for ( int i = 0; i < numCars; i++) { // loop through the rented cars
        if (id == cars[i] -> getId()) { // Check if the car ID matches
            cars[i] -> print(); // Print the car details
            return;

        }
    }
}
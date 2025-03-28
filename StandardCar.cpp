//
// Created by Niall Cunningham on 2025-03-11.
//
//Niall Cunningham
//40227080
#include "StandardCar.h"

StandardCar::StandardCar():Car() { // default constructor
    type = "Standard"; // set type to Standard
}
StandardCar::StandardCar(int id1): Car(id1){ // constructor with id
    type = "Standard";
}

StandardCar::StandardCar(const StandardCar& StandardCar):Car(StandardCar) { //copy constructor

}

StandardCar::~StandardCar() { // destructor, nothing to do
    
}
void StandardCar::print() const { // print function
    cout << "ID: " << id << endl;
    cout << "Type: " << type << endl;
    cout << "Availability: " << available << endl << endl;
}
StandardCar* StandardCar::copy() const { // copy function
    return new StandardCar(*this); // return a new StandardCar object
}
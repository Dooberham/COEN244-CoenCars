//
// Created by Niall Cunningham on 2025-03-11.
//
//Niall Cunningham
//40227080
#include "LuxuryCar.h"
#include <iostream>

LuxuryCar::LuxuryCar():Car() { // default constructor
    type = "Luxury";  // set type to Luxury
}
LuxuryCar::LuxuryCar(int id1): Car(id1){
    type = "Luxury";

}

LuxuryCar::LuxuryCar(const LuxuryCar& luxurycar):Car(luxurycar) { // copy constructor, initialized in base class

}

LuxuryCar::~LuxuryCar() { //Default destructor

}
void LuxuryCar::print() const { // print function
    cout << "ID: " << id << endl;
    cout << "Type: " << type << endl;
    cout << "Availability: " << available << endl << endl;
}

LuxuryCar* LuxuryCar::copy() const { // copy function
    return new LuxuryCar(*this); // return a new object
}

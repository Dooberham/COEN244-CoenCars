//
// Created by Niall Cunningham on 2025-03-11.
//

#include "LuxuryCar.h"
#include <iostream>

LuxuryCar::LuxuryCar():Car() {
    type = "Luxury";
}
LuxuryCar::LuxuryCar(int id1): Car(id1){
    type = "Luxury";

}

LuxuryCar::LuxuryCar(const LuxuryCar& luxurycar):Car(luxurycar) {

}

LuxuryCar::~LuxuryCar() {

}
void LuxuryCar::print() const {
    cout << "ID: " << id << endl;
    cout << "Type: " << type << endl;
    cout << "Availability: " << available << endl;
}

LuxuryCar* LuxuryCar::copy() const {
    return new LuxuryCar(*this);
}

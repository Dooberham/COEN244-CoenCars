//
// Created by Niall Cunningham on 2025-03-11.
//

#include "LuxuryCar.h"

LuxuryCar::LuxuryCar():Car() {

}
LuxuryCar::LuxuryCar(int id1, string type1): Car(id1, type1){

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


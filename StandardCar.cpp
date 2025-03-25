//
// Created by Niall Cunningham on 2025-03-11.
//

#include "StandardCar.h"

StandardCar::StandardCar():Car() {
    type = "Standard";
}
StandardCar::StandardCar(int id1): Car(id1){
    type = "Standard";
}

StandardCar::StandardCar(const StandardCar& StandardCar):Car(StandardCar) {

}

StandardCar::~StandardCar() {
    
}
void StandardCar::print() const {
    cout << "ID: " << id << endl;
    cout << "Type: " << type << endl;
    cout << "Availability: " << available << endl;
}
StandardCar* StandardCar::copy() const {
    return new StandardCar(*this);
}
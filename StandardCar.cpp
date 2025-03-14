//
// Created by Niall Cunningham on 2025-03-11.
//

#include "StandardCar.h"

StandardCar::StandardCar():Car() {

}
StandardCar::StandardCar(int id1, string type1): Car(id1, type1){

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
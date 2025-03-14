#include <iostream>
#include "Car.h"
#include "LuxuryCar.h"
#include "StandardCar.h"
int main() {

    LuxuryCar car(12, "type  of car ");
    car.print();

    car.setAvailability(0);

    car.print();

    LuxuryCar(car1) = car;

    car1.print();

    StandardCar car2;
    car2.print();
    return 0;
}

#include <iostream>
#include "Car.h"
#include "LuxuryCar.h"
#include "StandardCar.h"
#include "Company.h"
int main() {

    LuxuryCar car(12, "type  of car ");
    car.print();
    car.setAvailability(0);
    car.print();
    LuxuryCar(car1) = car;
    car1.print();
    StandardCar car2;
    car2.print();


    Company company;

    company.addCar(&car);
    company.addCar(&car);
    cout <<"Companys cars" << endl;
    company.listAllCars();
    return 0;
}

#include <iostream>
#include "Car.h"
#include "LuxuryCar.h"
#include "StandardCar.h"
#include "Company.h"
#include "Customer.h"
#include "Date.h"
int main() {
    Date d1;
    Date d2;
    LuxuryCar car(12, "type  of car ");
    car.print();
    car.setAvailability(1);
    car.print();
    LuxuryCar car1 = car;
    car1.print();
    StandardCar car2;
    car2.print();


    Company company;

    company.addCar(&car);
    company.addCar(&car);
    cout <<"Companys cars" << endl;
    company.listAllCars();

    Customer c;
    c.rent(&car, d1, d2);
    company.listAllCars();
    c.returnCar(12);
    company.listAllCars();




    return 0;
}

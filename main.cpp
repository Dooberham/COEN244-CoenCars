#include <iostream>
#include "Car.h"
#include "LuxuryCar.h"
#include "StandardCar.h"
#include "Company.h"
#include "CorporateCustomer.h"
#include "Date.h"
int main() {
    Date d1(12,12,12);
    Date d2(6,6,6);
    LuxuryCar car(12);
    car.print();
    car.setAvailability(1);
    car.print();
    LuxuryCar car1 = car;
    car1.print();
    StandardCar car2;
    car2.print();

    CorporateCustomer c(123, "Jimnohty Davis","123 street","141421");
    Company company;
    company.addCar(&car2);
    Company company1 = company;

    car.getRenter();
    c.rent(&car, d1, d2);
    cout<<car2.getRenter()->getName() << endl;
    cout<<car2.getRenter()->getName() << endl;
    c.returnCar(12);
    cout<<car2.getRenter()->getName() << endl;
    cout<<car2.getRenter()->getName() << endl;





    return 0;
}

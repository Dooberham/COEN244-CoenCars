#include <iostream>
#include "Car.h"
#include "LuxuryCar.h"
#include "StandardCar.h"
#include "Company.h"
#include "CorporateCustomer.h"
#include "RegularCustomer.h"
#include "Date.h"
//Niall Cunningham
//40227080
int main() {

    Date* d1= new Date(12,12,12);
    Date* d2 = new Date(6,6,6);

    Company* company = new Company();

    LuxuryCar* lcar = new LuxuryCar(1001);
    LuxuryCar* lcar1= new LuxuryCar(1002);
    LuxuryCar* lcar2 = new LuxuryCar(*lcar); // copy constructor

    StandardCar* scar = new StandardCar(0001);
    StandardCar* scar1 = new StandardCar(0002);
    StandardCar* scar2 = new StandardCar(*scar);

    company->addCar(lcar);company->addCar(lcar1);company->addCar(scar);company->addCar(scar1);
    //adding all cars to company array

    CorporateCustomer* cc = new CorporateCustomer(123, "Beast philanthropy","Beast street","141421");
    CorporateCustomer* cc1 = new CorporateCustomer();

    cc->rent(lcar,*d1, *d2); //rent a car with rental dates
    cc->rent(lcar1,*d1,*d2);

    CorporateCustomer* cc2 = new CorporateCustomer(*cc); // copy constructor with rented cars

    cc -> print(); //print info of the customer
    cc2 -> print();

    cc -> listCars(); //list all rented cars

    cc -> searchCars(1001); //search for car with id 1001


    RegularCustomer* rc = new RegularCustomer(001,"Jimmy Donaldson","12 beast str","51429841");
    RegularCustomer* rc1 = new RegularCustomer();
    RegularCustomer* rc2 = new RegularCustomer(*rc);

    rc->rent(scar,*d1,*d2); //rent a car with rental dates

    rc -> print(); //print info of the customer
    rc2 -> print();

    rc->rent(scar1,*d1,*d2); // Should not work as limit is 1 rental

    company -> listAllCars(); // list all cars under company

    company -> removeCar(1001); //Cannot remove as car is currently rented

    company -> removeCar(0002); // Successful removal

    company -> listAllCars(); //List of the cars except id 2

    cout << company -> searchCar(1002) << endl; // Search for car with id 1002, returns 1

    lcar -> getRenter()->print(); //get the renter of the car
    lcar -> getRentalDate().printDate(); // get the rental date of the car
    lcar -> getReturnDate().printDate(); // get the return date of the car

    cc -> returnCar(1001); // return the car

    lcar -> getRenter()->print(); //renter is an empty object after returning
    lcar -> getRentalDate().printDate(); // shows zeros
    lcar -> getReturnDate().printDate(); // shows zeros







    delete company;
    delete lcar; delete lcar1; delete lcar2;
    delete scar; delete scar1; delete scar2;
    delete cc; delete cc1; delete cc2;
    delete d1; delete d2;

    return 0;
}

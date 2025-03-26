#include <iostream>
#include "Car.h"
#include "LuxuryCar.h"
#include "StandardCar.h"
#include "Company.h"
#include "CorporateCustomer.h"
#include "RegularCustomer.h"
#include "Date.h"
int main() {
    Date d1(12,12,12);
    Date d2(6,6,6);

    LuxuryCar lcar(1001);
    LuxuryCar lcar1(1002);
    LuxuryCar lcar2 = lcar;

    StandardCar scar(0001);
    StandardCar scar1(0002);
    StandardCar scar2 = scar;

    CorporateCustomer cc(123, "Beast philanthropy","Beast street","141421");
    CorporateCustomer cc1();
    cc.rent(&lcar,d1, d2);
    cc.rent(&lcar1,d1,d2);
    CorporateCustomer cc2 = cc;
    lcar.setDates(Date(), Date());
    cc.listCars();
    cc2.listCars();

    cout <<&cc<<endl;
    cout <<&cc2;


    RegularCustomer rc(001,"Jimmy Donaldson","12 beast str","51429841");
    RegularCustomer rc1();
    RegularCustomer rc2 = rc;

    //Company company;
    //company.addCar(&lcar2);
    //Company company1 = company;





    return 0;
}

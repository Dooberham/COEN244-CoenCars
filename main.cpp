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

    Company company;

    LuxuryCar lcar(1001);
    LuxuryCar lcar1(1002);
    LuxuryCar lcar2 = lcar;

    StandardCar scar(0001);
    StandardCar scar1(0002);
    StandardCar scar2 = scar;

    company.addCar(&lcar);company.addCar(&lcar1);company.addCar(&scar);company.addCar(&scar1);

    CorporateCustomer cc(123, "Beast philanthropy","Beast street","141421");
    CorporateCustomer cc1();
    cc.rent(&lcar,d1, d2);
    cc.rent(&lcar1,d1,d2);
    CorporateCustomer cc2 = cc;

    RegularCustomer rc(001,"Jimmy Donaldson","12 beast str","51429841");
    RegularCustomer rc1();
    RegularCustomer rc2 = rc;
    rc.rent(&scar,d1,d2);
    rc.rent(&scar1,d1,d2);







    return 0;
}

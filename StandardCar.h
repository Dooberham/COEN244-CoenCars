//
// Created by Niall Cunningham on 2025-03-11.
//

#ifndef COENCARS_STANDARDCAR_H
#define COENCARS_STANDARDCAR_H
#include "Car.h"
class StandardCar : public Car {
public:

    StandardCar(); // default constructor
    StandardCar(int); // constructor with id
    StandardCar(const StandardCar&); // copy constructor


    virtual void print() const; // print function
    virtual ~StandardCar(); // destructor
    virtual StandardCar* copy() const; // copy function
};
#endif //COENCARS_STANDARDCAR_H

//
// Created by Niall Cunningham on 2025-03-11.
//

#ifndef COENCARS_LUXURYCAR_H
#define COENCARS_LUXURYCAR_H
#include "Car.h"
class LuxuryCar : public Car {
    public:
    LuxuryCar(); // default constructor
    LuxuryCar(int); // constructor with id
    LuxuryCar(const LuxuryCar&); // copy constructor
    virtual void print() const; // print function
    virtual ~LuxuryCar(); // destructor
    virtual LuxuryCar *copy() const; // copy function



};
#endif //COENCARS_LUXURYCAR_H

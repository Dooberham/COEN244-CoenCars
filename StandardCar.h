//
// Created by Niall Cunningham on 2025-03-11.
//

#ifndef COENCARS_STANDARDCAR_H
#define COENCARS_STANDARDCAR_H
#include "Car.h"
class StandardCar : public Car {
public:

    StandardCar();
    StandardCar(int, string);
    StandardCar(const StandardCar&);


    virtual void print() const;
    virtual ~StandardCar();
};
#endif //COENCARS_STANDARDCAR_H

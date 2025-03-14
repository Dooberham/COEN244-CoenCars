//
// Created by Niall Cunningham on 2025-03-11.
//

#ifndef COENCARS_LUXURYCAR_H
#define COENCARS_LUXURYCAR_H
#include "Car.h"
class LuxuryCar : public Car {
    public:
    LuxuryCar();
    LuxuryCar(int, string);
    LuxuryCar(const LuxuryCar&);
    virtual void print() const;
    virtual ~LuxuryCar();




};
#endif //COENCARS_LUXURYCAR_H

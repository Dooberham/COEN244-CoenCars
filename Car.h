//
// Created by Niall Cunningham on 2025-03-11.
//

#ifndef COENCARS_CAR_H
#define COENCARS_CAR_H
#include <iostream>
using namespace::std;

class Car {
public:
    Car();
    Car(int id, string type, bool available);


private:
    int id;
    string type;
    bool available;


};
#endif //COENCARS_CAR_H

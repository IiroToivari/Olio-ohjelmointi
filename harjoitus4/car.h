#ifndef CAR_H
#define CAR_H
#include <iostream>
using namespace std;
#include "engine.h"
#include "wheel.h"
class Car
{
    private:
string model;
string brand;
Engine objEngine;

Wheel objWheel1, objWheel2,objWheel3,objWheel4;



public:
    Car();
    Car(string, string);
    void printDetails();
    void setEngine();
    void setWheels();


    string getModel() const;
void setModel(const string &newModel);
string getBrand() const;
void setBrand(const string &newBrand);
void setObjEngine(const Engine &newObjEngine);
};

#endif // CAR_H

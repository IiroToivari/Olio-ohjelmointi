#include <iostream>
#include "car.h"
using namespace std;

int main()
{
    Car Car("Toyota ", "Corolla");

    Car.setEngine();
    Car.setWheels();

    Car.printDetails();


    return 0;
}

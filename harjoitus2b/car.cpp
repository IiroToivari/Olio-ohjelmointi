#include "car.h"

string Car::getBrand() const
{
    return brand;
}

void Car::setBrand(const string &newBrand)
{
    brand = newBrand;
}

string Car::getModel() const
{
    return model;
}

void Car::setModel(const string &newModel)
{
    model = newModel;
}

void Car::carinfo()
{
    cout<<"Merkki:"<<brand<<" Malli:"<<model<<" Vuosimalli:"<<yearModel<<endl;
}

Car::Car() {}

Car::Car(string n, string m, int y)
{
    brand=n;
    model=m;
    yearModel=y;
}

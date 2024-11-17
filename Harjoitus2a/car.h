#ifndef CAR_H
#define CAR_H
#include<iostream>
using namespace std;

class Car
{
private:

    string brand;
    string model;
    string yearModel;

public:
    printData();
    setBrand(string);
    setModel(string);
    setYearModel(int);

    Car();
    string getBrand() const;
    void setBrand(const string &newBrand);
    string getModel() const;
    void setModel(const string &newModel);
    string getYearModel() const;
};

#endif // CAR_H

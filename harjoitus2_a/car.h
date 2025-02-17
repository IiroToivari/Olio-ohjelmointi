#ifndef CAR_H
#define CAR_H
#include<iostream>
using namespace std;

class Car
{
private:
    string brand;
    string model;
    int yearModel;


public:
    Car();
    string getBrand() const;
    void setBrand(const string &newBrand);
    string getModel() const;
    void setModel(const string &newModel);
    int getYearModel() const;
    void setYearModel(const int &newYearModel);

    void carinfo();
};

#endif // CAR_H

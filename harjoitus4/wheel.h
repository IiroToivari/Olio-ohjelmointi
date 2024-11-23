#ifndef WHEEL_H
#define WHEEL_H
using namespace std;
#include <iostream>


class Wheel
{
private:
    int size;
    string type;
public:
    Wheel();
    Wheel(int, string);
    int getSize() const;
    void setSize(int newSize);
    string getType() const;
    void setType(const string &newType);
};

#endif // WHEEL_H

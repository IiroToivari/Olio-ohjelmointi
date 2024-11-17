#include "rectangle.h"

double Rectangle::getWidth() const
{
    return width;
}

void Rectangle::setWidth(double newWidth)
{
    width = newWidth;
}

double Rectangle::getHeight() const
{
    return height;
}

void Rectangle::setHeight(double newHeight)
{
    height = newHeight;
}

void Rectangle::rectangleinfo()
{
    cout<<"Suorakulmion pinta-ala:"<<getArea()<<" ja "<<"Suorakulmion ymrapys:"<<getCircum()<<endl;
}

Rectangle::Rectangle() {}

double Rectangle::getArea()
{
   return width*height;
}

double Rectangle::getCircum()
{
   return 2 * (width+height);
}

#include <car.h>
#include <iostream>
#include <memory>
#include <rectangle.h>
#include <student.h>

using namespace std;

int main()
{
    Car *objCar1=new Car;
    objCar1->setBrand("Tesla");
    objCar1->setModel("Model3");
    objCar1->setYearModel(2024);

    objCar1->carinfo();

    delete objCar1;
    objCar1=nullptr;

    cout<<"---------------------------------"<<endl;

    Rectangle *objRectangle=new Rectangle;
    objRectangle->setWidth(3);
    objRectangle->setHeight(5);

    objRectangle->rectangleinfo();

    delete objRectangle;
    objRectangle=nullptr;

    cout<<"---------------------------------"<<endl;

    std::unique_ptr<Student> student1 = std::make_unique<Student>();

    student1->setName("Aku");
    student1->setStudentNumber(313);
    student1->setAverage(4);

    cout<<"Opiskelia: "<<student1->getName()<<endl;
    cout<<"Opiskelianumero: "<<student1->getStudentNumber()<<endl;
    cout<<"Keskiarvo: "<<student1->getAverage()<<endl;

    cout<<"---------------------------------"<<endl;

    return 0;
}

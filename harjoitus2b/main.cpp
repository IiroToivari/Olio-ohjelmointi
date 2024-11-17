#include "car.h"
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<Car> carList;

    Car objCar_1=Car("Tesla","Model 3",2024);
    Car objCar_2=Car("Seat","Leon",2021);
    Car objCar_3=Car("Ford","Fiesta",2020);

    carList.push_back(objCar_1);
    carList.push_back(objCar_2);
    carList.push_back(objCar_3);

    carList[1].carinfo();

    cout<<"---------------------"<<endl;
    cout<<""<<endl;


    for(int x=0; x<3; x++){
        carList[x].carinfo();
    }



    cout<<""<<endl;
    cout<<""<<endl;
    cout<<""<<endl;
    return 0;
}

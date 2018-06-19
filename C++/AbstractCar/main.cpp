#include <iostream>
#include "Car.h"
#include "BMW.h"
#include "CarFactory.h"
#include "BMWFactory.h"
#include "Car.h"
int main() {




    Car* c = new Car();

    CarFactory* carFactory = new BMWFactory();


    Car* myCar;

    myCar = carFactory->MakeCar("BMW","Bridgestone");

    cout<<myCar->name<<endl;
    cout<<"Wheels Diameter:"<< myCar->wheels->diameter<<endl;
    cout<<"Wheels Size: "<<myCar->wheels->size<<endl;


    return 0;
}
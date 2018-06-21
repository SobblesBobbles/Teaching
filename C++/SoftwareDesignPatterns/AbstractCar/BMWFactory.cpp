//
// Created by Stephen O Brien on 19/06/2018.
//

#include "BMWFactory.h"
#include "BMW.h"
#include "Bridgestone.h"

BMWFactory::BMWFactory() {

}

Car* BMWFactory::MakeCar(string name, string wheels) {

    cout<<"Welcome to the BMW Factory"<<endl;
    Car* car;


    car = new BMW();
    if (wheels == "Bridgestone"){                   // for bridgestone wheels
        cout<<"Adding Bridgestone Wheels"<<endl;
         car->setWheels(new Bridgestone);           //sets the wheel address in car to this new wheels object
//        cout<<car->wheels->size<<endl;

    }

    return car;
}

BMWFactory::~BMWFactory() {}
//
// Created by Stephen O Brien on 16/07/2018.
//

#include "TestShapes.h"


int main() {

    //part 1
    Rectangle* r1 = new Rectangle(10,10);
    Rectangle* r2 = new Rectangle(20,20);

    cout<<"R1 Area => "<<r1->calculateArea()<<endl;
    cout<<"R1 Perimeter => "<<r1->calculatePerimeter()<<endl;

    //part 2
    r2->setColour("Black");
    r2->setLength(1.5);
    r2->setWidth(1.5);

    //part 3
    cout<<"R2 has new values of ("<<r2->getLength()<<","<<r2->getWidth()<<")."<<endl;

    //part 4
    cout<<"R2 new area is "<<r2->calculateArea()<<endl;
    cout<<"R2 new perimeter is "<<r2->calculatePerimeter()<<endl;
    cout<<"*****"<<endl<<endl;

    delete r1;
    delete r2;

    //part 5
    Rectangle* array = new Rectangle[5];

    for (int i = 0; i<5; i++){
        array[i].setLength(i+10);
        array[i].setWidth(i+10);

    }

    for (int i = 0; i<5; i++){
        cout<<"Array at => "<<i<<" length is => "<<array[i].getLength()<<endl;
        cout<<"Array at "<<i<<" width is => "<<array[i].getWidth()<<endl;
        cout<<"Area is => "<<array[i].calculateArea()<<endl;
        cout<<"Perimeter is => "<<array[i].calculatePerimeter()<<endl;
    }


    delete[] array;

    return 0;
}
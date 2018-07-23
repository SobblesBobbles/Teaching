#include <iostream>

using namespace std;
#include "Point.h"

int main (){


//part 5

    Point* point1 = new Point(); // pointer is created on the heap
    point1->setX(10);       //setter
    point1->setY(20);
    point1->printPoint();       //prints the variables

    Point* point2 = new Point(11,22);   //different declaration of the oject

    point2->printPoint();   //prints

    cout<<"*******"<<endl;
    cout<<endl;

    delete point1;      //deleting from the heap
    delete point2;

// part 6

    Point* array = new Point[5];        //array of points

    array[0].setX(11);          //setting
    array[0].setY(22);

    array[4].setX(9);

    array[4].setY(22);

    array[0].printPoint();      //printing
    array[4].printPoint();


    delete[] array;     //deleting from the heap

    return 0;
}
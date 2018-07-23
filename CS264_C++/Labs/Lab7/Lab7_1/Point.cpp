//
// Created by Stephen O Brien on 16/07/2018.
//

#include "Point.h"

//constructors
Point::Point(){
    x = 0;
    y = 0;
}

Point::Point(int a, int b){
    x = a;
    y = b;
}

//getters and setters

int Point::getX() {
    return x;
}

int Point::getY() {
    return y;
}

void Point::setX(int a) {
    x = a;
}
void Point::setY(int a) {
    y = a;
}


//print function
void Point::printPoint() {
    cout<<"Point coordinates are ("<<x<<","<<y<<")."<<endl;
}
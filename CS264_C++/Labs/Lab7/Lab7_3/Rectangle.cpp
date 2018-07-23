//
// Created by Stephen O Brien on 16/07/2018.
//

#include "Rectangle.h"



double calculateArea();
double calculatePerimeter();

Rectangle::Rectangle() {
    colour = "Grey";
}
Rectangle::Rectangle(double a, double b) {
    length = a;
    width = b;
}

void Rectangle::setLength(double l){
    length = l;
}
double Rectangle::getLength() {
    return length;
}
void Rectangle::setWidth(double w) {
    width = w;
}
double Rectangle::getWidth() {
    return width;
}

void Rectangle::setColour(std::string c) {

    colour = c;
}

std::string Rectangle::getColour() {
    return colour;
}

double Rectangle::calculateArea() {
    return length*width;
}
double Rectangle::calculatePerimeter() {
    return 2*(width+length);
}
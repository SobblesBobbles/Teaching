//
// Created by Stephen O Brien on 16/07/2018.
//

#ifndef LAB7_3_RECTANGLE_H
#define LAB7_3_RECTANGLE_H

#include <iostream>

//class
class Rectangle {
private:
    double length;
    double width;
    std::string colour;

public:
    // declarations
    Rectangle();
    Rectangle(double,double);
    void setLength(double);
    double getLength();
    void setWidth(double);
    double getWidth();
    void setColour(std::string);
    std::string getColour();
    double calculateArea();
    double calculatePerimeter();


};


#endif //LAB7_3_RECTANGLE_H

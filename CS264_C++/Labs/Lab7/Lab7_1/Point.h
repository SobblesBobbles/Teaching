//
// Created by Stephen O Brien on 16/07/2018.
//

#ifndef LAB7_1_POINT_H
#define LAB7_1_POINT_H


#include <iostream>
using namespace std;
class Point {

    //variables
private:
    int x;
    int y;

public:
    //constructors
    Point();
    Point(int x, int y);

    //getters and setters
    int getX();
    void setX(int a);
    int getY();
    void setY(int a);
    //print function
    void printPoint();


};


#endif //LAB7_1_POINT_H

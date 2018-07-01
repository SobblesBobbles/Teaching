#include <iostream>
using namespace std;

void swapNone (int a, int b){   // the changes in the variable addresses get lost in the method

int temp;
temp = a;
a = b;
b = temp;
}

void swapWithAddress (int &a, int &b){  // the changes are updated in the main driver

    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main() {


    int a = 10, b = 20;


    swapNone(a,b);

    cout<<"A is "<<a<<endl;
    cout<<"B is "<<b<<endl;

    swapWithAddress(a,b);


    cout<<"A is "<<a<<endl;
    cout<<"B is "<<b<<endl;



    return 0;
}
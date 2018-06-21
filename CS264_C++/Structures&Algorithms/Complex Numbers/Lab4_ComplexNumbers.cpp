

#include <iostream>
using namespace std;


/*
Q. Create a class that has the ability to implement 'Complex' numbers(ie, real + Imaginary).
Create suitable functions that can add, subtract and multiple these complex numbers. 

*/


class Complex {
public:
	Complex(){		//constructor, sets numbers to 0. 
		a=0;
		b=0;
	}

	Complex(int x, int y){ //constructor with parameters. 

		a = x;
		b=y;
	}


	double getReal(){ 		//returns real numbers
		return a;
	}
	void setReal(int r){  //set setReal
		a=r;
	}
	double getImage(){ 		//get imaginary
		return b;
	}
	void setImage(int r){		//set imaginary
		b= r;
	}
	void printer (){			//prints the current complex number values. 

		cout<<"Complex number is ("<<a<<","<<b<<"i)"<<endl;
	}



	Complex Complex::add (const Complex &z ){		//takes a complex as an input and returns the new value. 
			double real_=a+z.a;
			double image = b+z.b;
			return Complex (real_,image);
		 }
	Complex Complex::sub(const Complex &z){ 	//does the same but subtracts and returns the new value.
		double real = a-z.a;
		double image = b-z.b;
		return Complex (real,image);
	}
	Complex Complex::mul(const Complex &z){ //multiples the values and returns a new complex value. 
		double real = a*z.a;
		double image = b*z.b;
		return Complex (real,image);
	}
	Complex operator+ (const Complex &a, const Complex &b){

		Complex temp;

		temp.a = a.a;
		temp.b = b.b;


		return &temp;
	}

private:
	int a;
	int b;

};



int main() {




	Complex a(10,10);
	Complex b(2,2);
	Complex c;

	c=a.add(b);



	return 0;
}

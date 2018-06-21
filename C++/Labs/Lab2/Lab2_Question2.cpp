/*
 * To Compile in C++, first you get to the directory of the file you want to compile. 
 * Next, we type "g++ name_of_file.cpp". This then creates file called 'a.out' which 
 * is used to execute the code.(Like creating a class file in Java). 
 * Finally, we use "./a.out" to run the code once its compiled. './' is the syntax for 
 * running C++ code. 
 */



/*
 * Question: The greatest common divisor(GCD) of two integers is the largest integer 
 * that evenly divides into each of the two integers. Write a function called gcd that
 * returns the greatest common divisor of two integers. The program should contain a 
 * function called gcd, with appropriate parameters and return type, that provide all
 * of the logic for computing the gcd of the two inputted numbers.
 */


#include <iostream>
using namespace std;


int gcd (int a, int b){

	int ans;

	for (int i = 2; i<max(a,b); i++){	// goes to max of two numbers

		if (b%i==0 && a%i==0){	//checks that both are divisible
			ans = i;			//assignment
		}
	}

	return ans;					//returns the assignment


}



int main(){

	int a, b;
	cin>>a;cin>>b;

	cout<<gcd(a,b)<<endl;




	return 0;
}
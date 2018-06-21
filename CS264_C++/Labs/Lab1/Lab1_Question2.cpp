/*
 * To Compile in C++, first you get to the directory of the file you want to compile. 
 * Next, we type "g++ name_of_file.cpp". This then creates file called 'a.out' which 
 * is used to execute the code.(Like creating a class file in Java). 
 * Finally, we use "./a.out" to run the code once its compiled. './' is the syntax for 
 * running C++ code. 
 */


/*
 * Question: Write a program that reads in two integers and determines and prints
 * if the first is a multiple of the second.
 */


#include <iostream>
using namespace std;




/*
 * This function just prints out if B is a multiple of A.  
 */
void determines(bool ans){ // ans is sent by 'isAMultipleOf' function. 
	if (ans==1){							 // if ans is true
		cout<<"This is a multiple."<<endl;
	}
	else {
		cout<<"This is not a multiple"<<endl;
	}

}
void isAMultipleOf (int a, int b){

	
	if (b%a==0){			//%modulo operator determines if the two numbers are multiples. 
		
		determines(true);	//uses the determine function to write to output. 
		
	}
	else {
		determines(false);	//uses to determine function to write to output. 
		
	}


}

int main(){


	int a,b;				// mulitple declaration
	cin>>a;cin>>b;			// takes in the variable values. 

 	isAMultipleOf(a,b);		// calls to function with variables.

	

	return 0;
}
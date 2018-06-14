/*
 * To Compile in C++, first you get to the directory of the file you want to compile. 
 * Next, we type "g++ name_of_file.cpp". This then creates file called 'a.out' which 
 * is used to execute the code.(Like creating a class file in Java). 
 * Finally, we use "./a.out" to run the code once its compiled. './' is the syntax for 
 * running C++ code. 
 */



/*
 * Question: Write a program that inputs a five-digit number, seperates the number into its 
 * individual digits and prints the digits seperated from one another by three spaces each. 
 */ 

#include <iostream>

using namespace std;


/*
 * This check function checks to make sure that the number entered is not more than
 * 5 digits. It returns a boolean flag.
 */
bool check (int a){
	if (a<=99999 && a>=0){
		return true;
	}
	else {
		return false;
	}
}

/*
 * Seperator function takes in an integer, it checks if its a 5 digit number. 
 * Then it gets the last digit of the number, prints it out and then divides it
 * by 10.
 */
void seperator (int a){

	if(check(a)==true){
		int catcher;
	
		while (a>1){
			
			
			catcher = a%10;  			// gets the last digit of the number
			cout<<catcher<<endl;        // prints it out.
			a/=10; 					    // divides it by 10.
			cout<<endl;					// spaces as specified.
			cout<<endl;                 // spaces as specified.
		
		}
		
	}
}


int main(){

	int a;

	 cin>>a;
	 seperator(a);

	return 0;
}
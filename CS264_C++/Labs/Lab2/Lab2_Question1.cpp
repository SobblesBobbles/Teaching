/*
 * To Compile in C++, first you get to the directory of the file you want to compile. 
 * Next, we type "g++ name_of_file.cpp". This then creates file called 'a.out' which 
 * is used to execute the code.(Like creating a class file in Java). 
 * Finally, we use "./a.out" to run the code once its compiled. './' is the syntax for 
 * running C++ code. 
 */





/*
 * Question: Write a function, called my_swap, that takes two integers as input
 * and swaps their values. To demonstrate that the function works, you should write 
 * a program that instructs the user to input two numbers. The program should store
 * those numbers in two seperate variables. The program should then output the values
 * stored in the two variables to the screen, swap the two numbers by calling my_swap 
 * and then ahain print out the values stored in the two variables.
 */


#include <iostream>

using namespace std;

void my_swap (int a , int b){ //without sending the reference

	int temp;

	temp = a;
	a = b;
	b = temp;
}
void my_swap_with_address (int &a, int &b){ //sending with integers but with address reference
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void my_swap_with_pointers( int* &a, int* &b){ //sending with pointers reference
	
	int* temp;
	temp = a;
	a = b;
	b = temp;
	
}
void print (int a, int b) {
	cout<<"A = "<<a<<endl;
	cout<<"B = "<<b<<endl;
}
void print_pointers(int* &c, int* &d){
		cout<<"C = "<<*c<<endl;
		cout<<"D = "<<*d<<endl;
}


int main(){

	int a,b;

	int* c,*d;

	cin>>a;cin>>b;
	print(a,b);

	// my_swap(a,b);
	my_swap_with_address(a,b);

	print(a,b);

	c = &a;
	d = &b;

	 my_swap_with_pointers(c,d);

	 print_pointers(c,d);
	 cout<<*c<<endl;
	cout<<"*******"<<endl;








	return 0;
}

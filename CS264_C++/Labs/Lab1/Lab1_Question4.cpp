/*
 * To Compile in C++, first you get to the directory of the file you want to compile. 
 * Next, we type "g++ name_of_file.cpp". This then creates file called 'a.out' which 
 * is used to execute the code.(Like creating a class file in Java). 
 * Finally, we use "./a.out" to run the code once its compiled. './' is the syntax for 
 * running C++ code. 
 */

/*
 * Question : Develop a C++ program that will determine if a department store customer
 * has exceeded the credit limit on a charge account. For each customer, the following
 * information is available:
 * 1. Account Number
 * 2. Balance at beginning of month
 * 3. Total for items charged
 * 4. Total of credit applied
 * 
 */ 
#include <iostream>

using namespace std;



struct customer {
	int accountNumber;
	int openingBalance;
	int totalItemsCharged;
	int totalCreditsApplied;


};

int getBalance (customer c){
	return c.openingBalance-c.totalCreditsApplied;
}

void showInfo (customer c){

	cout<<"Account Number: "<<c.accountNumber<<endl;
	cout<<"Opening Balance: "<<c.openingBalance<<endl;
	cout<<"Total Items Charged: "<<c.totalItemsCharged<<endl;
	cout<<"Total Credits Applied: "<<c.totalCreditsApplied<<endl;

	int ans = getBalance(c);
	cout<<"Net Balance : "<<ans<<endl;

}
bool check (customer c){
	if (c.totalCreditsApplied<(c.totalItemsCharged+c.openingBalance))
	{
		return false;
	}
	else {
		return true;
	}
}



int main(){



	customer newCustomer;

	newCustomer.accountNumber = 0001;
	newCustomer.openingBalance = 100;
	newCustomer.totalItemsCharged= 200;
	newCustomer.totalCreditsApplied = 500;

	showInfo(newCustomer);
	cout<<check(newCustomer)<<endl;




	return 0;
}
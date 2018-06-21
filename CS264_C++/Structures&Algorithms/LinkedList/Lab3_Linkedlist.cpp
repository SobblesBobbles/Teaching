#include <iostream>

using namespace std;

/* Lab3

Q. Create a simple struct that acts as a linkedlist, containing a name and a pointer to the
next link in the linkedlist. 
Use the linkedlist to print out each link. 

*/

struct customer {

	string name;
	customer* next;
};


int main() {
	
	customer c1;
	c1.name = "John";

	customer c2;
	c2.name = "Stephen";

	customer c3;
	c3.name = "Adam";

	c1.next = &c2;
	c2.next = &c3;

c3.next = NULL ;
	


	customer* temp;

	temp = &c1;
	while (temp != NULL)
	{
		
		cout<<temp->name<<endl;

		temp = temp->next;
	}





	return 0;
}
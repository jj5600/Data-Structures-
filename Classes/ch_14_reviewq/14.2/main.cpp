#include <iostream>
#include "Budget.h"
#include "Office.h"
using namespace std;
//Here I utilized the friend function to access private vlaues from another class
int main() {
	const int SIZE=5;
	Budget CA_B[SIZE];
	Office CA_O[SIZE];
	// here is an array of objects
	for(int i=0; i<SIZE; i++)
	{
		CA_O[i].addBud(33.16, CA_B[i]);
	

	}

	
cout<<"DONE Initializing values\n";
	for(int i=0; i<SIZE;i++)
	{
		cout<<CA_O[i].rBud(CA_B[i]);
		cout<<endl;


	}
	cout<<"\nDone outputting values: \n";
	Budget A;
	Office B;

	B.addBud(22.4, A);
	cout<<endl<<B.rBud(A)<<endl;
	//using a static variable to keep count of object creation 
	cout<<"Here are the total number of office objects created:";
	cout<<B.oCount()<<endl;
	return 0;
} 

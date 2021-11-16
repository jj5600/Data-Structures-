#include <iostream>
#include <cstdlib>
using namespace std;
void Hello();
const int BABY=5;
//all global vars should only be constants
//they shoudl also be captialized


//variable baby is a global variable;
int squareVal(int);
bool returnVal(int);
int diffOf(int,int);
void changeVal(int &);
// Paramter must have the data TYPE!!
int sumOf(int a, int b)
{	//the value of the argument is copied into the paramter
	//variables that hold the values passed as args are called
	//parameters
	// a and b are both parameters
	//can also be called a "formal parameter or formal argument"
	//
	return a+b;

}
void showstatic()
{
	static int statnum=5;
	cout<<statnum<<endl;
	statnum++;
}
void first();
void second();
void ran()
{
	cout<<"Here is random full function def\n";
	exit(EXIT_FAILURE);
}
//These blocks are called function prototypes and this is how they work
int main()

{	static int counter=0;
	int z= 4;
	int tt=8;
	cout<<"Here is Z: "<<z<<endl;
	Hello();
	cout<<endl<<"Now we are back in main\n";
	first();
	ran();
	cout<<sumOf(1,2)<<endl;
	cout<<diffOf(4,2)<<endl;
	z=squareVal(z);
	cout<<"Here is Z now: "<<z<<endl;

	for(int i =0; i<3; i++)
	{
		
		showstatic();

	}
	changeVal(tt);
	cout<<tt;
	//values passed to the fucntion are called arguments
	//an arugment can also be called an "actual parameter"
	//or an "actual argument"
	return 0;
}

//these are the defintions of the fucntion 
void Hello()
{


	cout<<"This is the hello function\n";
}

void first()
{

	cout<<"FIRST\n";
	second();


}
void second()
{

	cout<<"Second\n";


}
//header must have the declaration of each parameter parenthesis
int diffOf(int a, int b)
{
	return a-b;

}
int squareVal(int a)
{
	return a*a;



}
bool returnVal(int a)
{	bool status=false;
	if(a%2==0)
	{
		status=true;
		cout<<"true\n";
		
	}
	
	return status;
}
void changeVal(int & changethis)
{

	changethis+=5;



}

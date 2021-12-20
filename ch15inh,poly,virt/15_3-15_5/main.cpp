#include <iostream>
#include "Rectangle.h"
#include "Box.h"
using namespace std;
// this concept is called redefining baseclass function 

class baseclass
{
	public:
		void showmessage()
		{
			cout<<"baseclass message\n";
		}
};
class subclass: public baseclass
{
	public:
	void showmessage()
	{
		cout<<"subclass message\n";
	}


};
int main()
{ 	//based on if I feed arugments to the object creation ,
		// i impact which construcotr is used. constructor overloading in action 
		double boxWidth;
		double boxLength;
		double boxHeight;

		cout<<"\nWidth: ";
		cin>>boxWidth;
		cout<<"\nLength: ";
		cin>>boxLength;
		cout<<"\nHeight: ";
		cin>>boxHeight;
		cout<<endl;
		Box myBox(boxWidth,boxLength,boxHeight);
		cout<<"here are the properties\n";

		cout<<"Width: "<<myBox.getWidth()<<endl;
		cout<<"Length: "<<myBox.getLength()<<endl;
		cout<<"Height: "<<myBox.getHeight()<<endl;
		cout<<"Area: "<<myBox.getArea()<<endl;
		cout<<"Volume: "<<myBox.getVolume()<<endl;
		Rectangle JM(3.3,7.5);
		Rectangle KR;

		Box JJ;
		baseclass b;
		subclass c;
		b.showmessage();
		c.showmessage();

	cout<<"Hola, mundo!\n";


	return 0;
}
// what if the base class construcotr takes arugments?
// what if there is more than one constructor in the base class?
// the answer is to let the derived classes constructor pass arguments
// to the base classes constructor
// if the base class has no default constructor , then the derived class
// then the derived class must have a constructor that calls one of the base
// class constructors
//15.4 focuses on redefining base class functions
// from this a base class member function can be redefined in a derived class
//15.6 covers polymorphism and virtual functions


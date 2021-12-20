#include <iostream>
#include "shape.h"
#include "square.h"
using namespace std;
//Chapter 15: Inheritance, Polymorphism, and Virtual Functions
//15.1 What is Inheritance?
//Inhertance allows a new class to be based on a derived class/
//the new class automatically inherits all the member variables and functions 
//except the constructors and destructors of the class its based on 
//Example Insect ----> Bee 
//							|----> grasshopper
//there is a "is a " relationship with Inhertance
// civic is a Car water is a drink ... etc 
// (base class) ------> derived class
// Here we also note from 15.2 that the shape class attributes that
// we want the square class to inherit must be protected so that we can inherit

int main() {


	shape * ptr1;
	ptr1= new shape;
	
	square potato;
	potato.setLength(3);
	potato.setWidth(3);
	cout<<"here it is: "<<potato.getArea()<<endl;
	cout<<"here it is  "<<potato.getVal()<<endl;
	cout<<ptr1->getWidth()<<endl;
	cout<<ptr1->getLength()<<endl;
	ptr1->setWidth(4);
	ptr1->setLength(4);
	cout<<ptr1->getWidth()<<endl;
	cout<<ptr1->getLength()<<endl;
	cout<<ptr1->getArea()<<endl;

	
  cout << "Hola, Mundo!\n";
	delete ptr1;
	return 0;
} 

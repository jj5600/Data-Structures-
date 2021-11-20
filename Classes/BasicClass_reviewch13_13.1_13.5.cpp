#include <iostream>
using namespace std;
//Chapter 13 intro to classes
//OOP is based on data and functions that act on it
//allows bundling of variables but variables and functions
//can have different properties
//An Object is an instance of a class

//- A class is like a blueprint, and an objects are like houses
//that are built from the blueprint
//(Attributes) are members of a class-- DATA
//methods or behaviors are member funcntions of a class-- FUNCTIONS
//data hiding restricts access to certain members fo an object
class Rectangle
{	// class default is private
	private: // can only be accessed by function within a class
	//private members \/
	double width;
	double length;

	public: //canbe accessed by functions outside the class
	//public memebers \/
	void setWidth(double);
	void setLength(double);
	double getWidth() const;// const specifies that the fucntion wont change any of the data
	double getLength() const;
	double getArea() const;
};
//There are mutators and accessors
//mutators use methods to change data members
//accessors just access the data members,but dont change them
//accessors are marked with "const" because they dont change the data members

void Rectangle::setWidth(double w)
{
	width=w;
}
void Rectangle::setLength(double l)
{
	length=l;
}
double Rectangle::getLength() const
{

	return length;	
}
double Rectangle::getWidth() const
{

	return width;
}
double Rectangle::getArea() const
{

	return width*length;
}
int main() {
	Rectangle one;
	Rectangle two;
	Rectangle three;

	one.setWidth(1.12);
	one.setLength(1.78);
	double temp=one.getArea();
	cout<<temp<<endl;
  cout << "Hello World!\n";

	//we can also define a pointer to an object
	Rectangle *rptr=nullptr;
	rptr = &two;
	rptr->setLength(1.12);
	rptr->setWidth(2.2);
	cout<<rptr->getArea()<<endl;
	cout<<two.getArea()<<endl;
	// you can also dynamically allocate an object
	Rectangle * r3ptr=nullptr;
	r3ptr = new Rectangle;
	r3ptr->setLength(3.1);
	r3ptr->setWidth(4.4);
	cout<<r3ptr->getArea();
	delete r3ptr;
	r3ptr=nullptr;




} 

#ifndef RECTANGLE_H
#define RECTANGLE_H
#include<iostream>
using namespace std;
class Rectangle 
{
	private:
	double length;
	double width;
	public:
	Rectangle()
	{	cout<<"run 1\n";
		width=0.0;
		length=0.0;
	}
	Rectangle(double w, double len)
	{	cout<<"run 2\n";
		width=w;
		length=len;
	}
	double getLength() const
	{
		return length;
	}
	double getWidth() const
	{
		return width;
	}
	double getArea() const
	{

		return width*length;
	}
	void changeLength(double a)
	{
		length=a;
	}
	void changeWidth(double b)
	{
		width=b;
	}
	
};

#endif

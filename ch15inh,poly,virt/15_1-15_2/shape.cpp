#include "shape.h"
#include<iostream>
using namespace std;
void shape::setWidth(int a)
{
	width=a;

}
void shape::setLength(int b)
{
	length=b;
}

int shape::getWidth() const
{
	return width;

}
int shape::getLength() const
{
	return length;
}
int shape::getArea() const
{
	return length * width;
}

shape::shape()
{
	cout<<"this is the base class constructor\n";
	length=2;
	width=2;

}
shape::~shape()
{
	cout<<"this is the base class destructor\n";
}

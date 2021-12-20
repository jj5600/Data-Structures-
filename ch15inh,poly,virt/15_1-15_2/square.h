#ifndef SQUARE_H
#define SQUARE_H
#include "shape.h"
#include<iostream>
using namespace std;
class square:public shape
{
	private:
	int statusflag;

	public:
	square()
	{
		cout<<"Square class construcotr\n";
	}
	~square()
	{
		cout<<"Square class Destructor\n";
	}
	
	int getVal() const
	{
		return length * width * 2;
	}

};

#endif

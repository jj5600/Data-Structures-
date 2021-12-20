#ifndef BOX_H
#define BOX_H
#include "Rectangle.h"
class Box: public Rectangle
{
	protected:
	double height;
	double volume;


	public:
	Box():Rectangle()
	{
		height=0.0;
		volume=0.0;

	}
	Box(double w, double len , double h ):Rectangle(w,len)
	{
		height=h;
		volume=getArea()*h;
	}
	double getHeight() const
	{
		return height;
	}
	double getVolume() const
	{

		return volume;
	}

};


#endif

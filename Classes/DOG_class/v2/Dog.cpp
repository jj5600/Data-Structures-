#include "Dog.h"
#include<iostream>
#include<cstdlib>
#include<string>
#include<cstring>
using namespace std;
//this is called the constructor
//and it is usually used to initialize values

Dog::Dog(double a)
{	
	cout<<"welcome to Dog class\n";
	weight=a;
	favperson="n/a";
	favtreat="n/a";
}
//if memory is dynamically allocated during a program it
//should be destroyed here

Dog::~Dog()
{
	cout<<"this is the desctructor\n";
}
void Dog::setWeight(double w)
{
	if(w>0)
	{
		weight=w;
	}
	else 
	{
		exit(EXIT_FAILURE);
	}
}
void Dog::setfavPerson(string p)
{
	favperson=p;

}
void Dog::setfavTreat(string t)
{
	favtreat=t;

}
double Dog::getWeight() const
{
	return weight;

}
string Dog::getfavPerson() const
{

	return favperson;

}

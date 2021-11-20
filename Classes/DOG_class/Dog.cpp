#include "Dog.h"
#include<iostream>
#include<cstdlib>
#include<string>
#include<cstring>
using namespace std;

void Dog::setWeight(double w)
{
	weight=w;
}
void Dog::setfavPerson(string p)
{
	favperson=p;

}
double Dog::getWeight() const
{
	return weight;

}
string Dog::getfavPerson() const
{

	return favperson;

}

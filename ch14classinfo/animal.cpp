#include "animal.h"
#include<iostream>
using namespace std;

animal::animal()
{
	cout<<"this is the animal constructor\n";
	animalCount++;

}
animal::~animal()
{


		cout<<"goodbye,,,,,,,\n";
}
void animal::changeWeight(int a)
{
	weight =a ;
	animalWeight+=a;
}
int animal::getWeight() const
{

	return weight;


}
int animal::getrandomVal() const
{

	return randomVal;
}
void animal::changerandomVal(int a)
{
	randomVal=33+a;
}
void printZ(animal a)
{


	cout<<a.z<<endl;
	
}
int animal::animalCount=0;
int animal::animalWeight=0;
int animal::randomVal=0;

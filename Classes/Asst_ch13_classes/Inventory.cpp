#include "Inventory.h"
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

Inventory::Inventory()
{
	checkInNumber=0;
	damageDesc="";
	customerLast="";
	custPhone="";
	priceQuoted=0;
	hoursWorked=0;
	

}
void Inventory::setcheckInNumber(int a)
{

	if(a>=0)
	{
		checkInNumber=a;
	}

	else
	{
		cout<<"Invalid Input";
		exit(EXIT_FAILURE);
	}
}

void Inventory::setdamageDesc(string a)
{
	if(a.size()<25)
	{
		damageDesc=a;

	}
	else
	{
		cout<<"String too long needs to be 25 or less. you:"<<a.size()<<endl;
		exit(EXIT_FAILURE);
	
	}

}
void Inventory::setcustomerLast(string a)
{
	if(a.size()<25)
	{
		customerLast=a;

	}
	else
	{
		cout<<"String too long needs to be 25 or less. you:"<<a.size()<<endl;
		exit(EXIT_FAILURE);
	
	}

}
void Inventory::setcustPhone(string a)
{
	if(a.size()<11)
	{
		custPhone=a;

	}
	else
	{
		cout<<"String too long needs to be 11 or less. you:"<<a.size()<<endl;
		exit(EXIT_FAILURE);
	
	}

}

void Inventory::setpriceQuoted(float a)
{
	if(a>=0)
	{
		priceQuoted=a;
	}
	else 
	{
		exit(EXIT_FAILURE);
	}

}
void Inventory::sethoursWorked(float a)
{
	if(a>=0)
	{
		hoursWorked=a;
	}
	else
	{

		exit(EXIT_FAILURE);
	}
}

#include "Office.h"
#include "Budget.h"
#include<iostream>
using namespace std;
int Office::officeCount=0;
Office::Office()
{

	officeNum=0;
	officeCount+=1;

}

Office::~Office()
{


}

void Office::addBud(double a, Budget &t)
{
	t.budgetVal=a;
}
double Office::rBud(Budget &t)
{

	return t.budgetVal;

}

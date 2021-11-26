#include "Son.h"

#include<iostream>
using namespace std;



Son::Son()
{

	cout<<"son constructor"<<endl;


}

Son::~Son()
{


	cout<<"son destructor"<<endl;

}

void Son :: changenum()
{

	publicnum=1;
	protectednum=2;


	//privatenum=3;
	//cant do this because private members are not inherited
	//only public and protected members are inherited


}

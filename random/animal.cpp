#include "animal.h"
#include<iostream>
#include<cstdlib>
#include<string>
#include<cstring>
using namespace std;

animal::animal()
{

	cout<<"constructor for animal class\n";	
	age=0;
}
void animal::changeAge(int a)
{

	age = a;

}
int animal::getAge() const
{
	return age;
}

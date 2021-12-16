#include <iostream>
#include <string>
#include<cstring>
#include "animal.h"
using namespace std;
int getval();
void twiceVal(int);

const int SIZE= 4;

int main() {
	animal dog;
	cout<<"this is the dogs age: "<<dog.getAge()<<endl;
	dog.changeAge(7);
	cout<<"this is the dogs age: "<<dog.getAge()<<endl;
	
	int x=0;
	int arrayTwo[SIZE]{0,1,2,3};
	for(int i=0; i<SIZE; i++)
	{	
		cout<<arrayTwo[i];

	}
	cout<<endl;
	for (int i =0; i<3; i++)
	{
		cout<<"how is it going?\n";
	}
	int t=0;
	while(t!=3)
	{
	cout << "Hello World!"<<endl;
	t+=1;

	}
	do{
		cout<<"yo!\n";
		x+=1;
	}while(x!=3);
	int tt=2;
	cout<<tt<<endl;
	cout<<&tt<<endl;
	int * ptr1=nullptr;
	ptr1= &tt;
	cout<<ptr1<<endl;
	cout<<*ptr1<<endl;
	int * a=nullptr;
	a= new int;

	*a =88;
	cout<<*a;
	delete a;
	cout<<*a;
	int pp=getval();
	cout<<endl<<pp<<endl;
	twiceVal(90);
	
	return 0;
} 
int getval()
{
	return 45;

}
void twiceVal(int a)
{
	cout<< a * 2;

}

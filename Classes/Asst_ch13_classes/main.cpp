#include <iostream>
#include <string>
#include "Inventory.h"
const int ARRAY_SIZE=5;
void gcheckinNumber(Inventory * ptr,int,int);
void gdamageDesc(Inventory * ptr,string,int);
void gcustomerLast(Inventory * ptr, string , int );
void gcustPhone(Inventory * ptr,string, int);
void gpriceQuoted(Inventory *ptr, float, int);
void ghoursWorked(Inventory *ptr, float , int);
using namespace std;
int main()
{
	static int t2=0;
	string temp;
	float t1;
	Inventory shop[ARRAY_SIZE];
	Inventory *ptr1=nullptr;
	ptr1=shop;


	for(int i=0; i<ARRAY_SIZE; i++)
	{
		gcheckinNumber(ptr1,i,i);
		cout<<"\nPlease enter a damage desc. less thean 25 chars: ";
		getline(cin,temp);
		gdamageDesc(ptr1,temp,i);
		cout<<endl;
		cout<<"Please enter a last name less than 25 chars: ";
		getline(cin,temp);
		gcustomerLast(ptr1,temp,i);
		cout<<endl;
		cout<<"Please enter a phone number less than 11 chars: ";
		getline(cin,temp);
		gcustPhone(ptr1,temp,i);
		cout<<endl;
		cout<<"Please enter a price quote: ";
		cin>>t1;
		cin.ignore();
		gpriceQuoted(ptr1,t1,i);
		cout<<endl;
		cout<<"Please enter hours worked: ";
		cin>>t1;
		cin.ignore();
		ghoursWorked(ptr1,t1,i);
		cout<<endl;

	}
	cout<<"-----DONE-----\n";
	cout<<"Welcome to the surf shop"<<endl;
	for(int i=0; i<ARRAY_SIZE; i++)
	{
		cout<<"Check in Number:\t"<<ptr1[i].getcheckInNumber()<<endl;
		cout<<"Damage:\t"<<ptr1[i].getdamageDesc()<<endl;
		cout<<"Cust:\t"<<ptr1[i].getcustomerLast()<<endl;
		cout<<"Phone:\t"<<ptr1[i].getcustPhone()<<endl;
		cout<<"Quote:\t"<<ptr1[i].getpriceQuoted()<<endl;
		cout<<"Hours:\t"<<ptr1[i].gethoursWorked()<<endl;
		t2+=ptr1[i].getpriceQuoted();
		cout<<endl;
	}
	cout<<"\n------\n";
	cout<<"Total $ made: "<<t2;
	return 0;
}
void gcheckinNumber(Inventory * ptr1 ,int a,int b)
{
	
	while(a<0)
	{	
		cout<<"invalid input: enter a positive int\n";
		cin>>a;
	}
	ptr1[b].setcheckInNumber(a);

	
}
void gdamageDesc(Inventory * ptr1, string c, int b)
{
	while(c.size()>25)
	{
		cout<<"Invalid length: must be less than 25 you : "<<c.size()<<endl;
		getline(cin,c);
	}

	ptr1[b].setdamageDesc(c);


}
void gcustomerLast(Inventory *ptr1, string d, int b)
{
	while(d.size()>25)
	{
		cout<<"Invalid length: must be less than 25 you : "<<d.size()<<endl;
		getline(cin,d);
	}
	ptr1[b].setcustomerLast(d);

}
void gcustPhone(Inventory *ptr1, string e, int b)
{
	while(e.size()>11)
	{
		cout<<"Invalid length: must be less than 11 you : "<<e.size()<<endl;
		getline(cin,e);
	}
	ptr1[b].setcustPhone(e);
	

}

void gpriceQuoted(Inventory *ptr1, float f, int b)
{
	while(f<0)
	{
		cout<<"Invalid.. please enter a positive value:"<<endl;
		cin>>f;
	}
	ptr1[b].setpriceQuoted(f);
	
}

void ghoursWorked(Inventory *ptr1, float g, int b)
{

	while(g<0)
	{
		cout<<"Invalid: please enter a positive value: "<<endl;
		cin>>g;
	}
	ptr1[b].sethoursWorked(g);
	


}

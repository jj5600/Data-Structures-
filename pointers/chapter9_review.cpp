#include <iostream>
//this section reviews pointers
//9.1 getting the address of the pointer
//each variable in the program is stored in a unique address in memory
//this address is printed in hexadecimal
//pointer variable stores the address
//*intptr derferences the ptr and presents the value
using namespace std;
void changeval(int *, int*);
int *getrandomNum(int num);
int main() 
{	int a=8;
	int * intptr=nullptr;
	intptr=&a;


	cout<<&a<<" :this is the address that stores the value 8";
	cout<<"\n the address is( intptr ): "<<intptr;
	cout<<"\n the value is ( *intptr ): "<<*intptr;
	//here i indirectly changed the value stored at A using the ptr
	*intptr=10;

	cout<<"\n the address is( intptr ): "<<intptr;
	cout<<"\n the value is ( *intptr ): "<<*intptr<<endl;
	// there also exists a relationship between arrays and pointers

	int vals[]{0,1,2,3,4};
	cout<<vals<<endl;
	cout<<vals[0]<<endl;

	// the array name can also be used as a pointer constant
	cout<<*vals<<endl; 
	int *valptr=vals;
	cout<<valptr[1]<<endl;
	cout<<*(valptr+1)<<endl;
	//vals[a]=*(vals+i)
	const int SIZE=3;
	short arr[3]{0,1,2};
	short * shortptr=nullptr;
	shortptr=arr;
	cout<<endl;
	for(int i=0; i<SIZE; i++)
		{
			cout<<shortptr[i];
		}
	cout<<endl;
	for(int i=0; i<SIZE; i++)
		{
			cout<<*(arr+i);
		}
	//two different ways to print out the same data

	cout<<endl;
	cout<<"Using pointer arithmetic\n";
	for(int i=0; i<SIZE; i++)
	{

		cout<<*shortptr;
		shortptr++;

	}
	cout<<endl;
	for(int i=0;i<SIZE; i++)
	{
		shortptr--;
		cout<<*shortptr;


	}
	cout<<endl;

	// pointers can also be initialized when defined

	int num, *numptr=&num;
	//using //if(!ptr) tests for an invalid address
	// you can also compare address and values of presents
	// *ptr1==*ptr2 compares the values
	// ptr1==ptr2 compares the addresses
	int aa=1;
	int bb=2;
	cout<<aa<<endl;
	cout<<bb<<endl;

	changeval(&aa,&bb);
	cout<<aa<<endl;
	cout<<bb<<endl;
	const int zzt=4;
	const int * rate=nullptr; //ptr to a const int
	// there are also constant pointers. Once initialized cannot point to anything else
	const int * const wow=&zzt;
	//constant pointer to a constant int
	int yo=4;
	int * const boo = &yo;
	// next there is dynamic memory allocation
	// the "new" operator is used to do this
	double *dptr=nullptr;
	dptr= new double;
	const int S= 12;
	double *arrayptr=nullptr;
	cout<<arrayptr<<endl;
	arrayptr= new double[S];
	cout<<arrayptr<<endl;
	delete [] arrayptr;
	delete arrayptr;
	cout<<arrayptr;
//------
//dynamic memory allocation is focused around the idea that
//variables can be created or destroyed while the program is running
// interivew question. what is memory leak and how to avoid?
//memory leak is when memory availablility is reduced because the user did not free memroy 
// this can be resolved by using the key word
//DMA is only possible with the use of pointers
// say you want to define an array during run time
// define the size during runtime and the computer will allocate memory in bytes for that space
int *intptr1=nullptr;// always initialize pointers to nullptr;
intptr1= new int;
cout<<intptr1<<endl;
*intptr1=25;

cout<<intptr1<<endl;
cout<<*intptr1<<endl;

delete intptr1;
int * bruhptr=nullptr;
bruhptr= new int[5];
for(int i=0; i<5; i++)
{

	bruhptr[i]=i;

}
for(int i=0; i<5; i++)
{
	cout<<bruhptr[i]<<endl;

}
delete [] bruhptr;
bruhptr=nullptr;
int *bruhbruh=nullptr;
bruhbruh=getrandomNum(5);
for(int i=0; i<5; i++)
{
	cout<<bruhbruh[i]<<"..";

}
delete bruhbruh;
bruhbruh=nullptr;
return 0;
//dynamically allocated memory is stored on the heap


} 

void changeval(int *a, int *b)
{

	int temp;
	temp=*a;
	*a=*b;
	*b=temp;

}
nt * getrandomNum(int num)
{

	int * arr =nullptr;
	if(num<=0)
	{
		return nullptr;
	}
	arr= new int[num];
	for(int i=0; i<num; i++)
	{
		arr[i]=i;

	}
	return arr;
}

#include <iostream>
#include<string>
#include<cstring>
#include "Dog.h"
using namespace std;
int main() {	

	cout << "Hello World!\n";
	string a;
	string b;

	Dog Frankie(0);
	Dog Eddie(0);
	
	//dynamically allocating another dog
	//welcome to dog clsss printed twice
	// we can use memberwise assignment to give values to another object 
	//through an equal sign
	Dog *ptrN=nullptr;
	ptrN=new Dog(0);

	Dog *ptrE=nullptr;
	Dog *ptrF=nullptr;
	Dog *ptrJ=nullptr;
	ptrF=&Frankie;
	ptrE=&Eddie;

	ptrF->setfavPerson("Joseph");
	ptrE->setfavPerson("Katie");
	ptrF->setWeight(98.2);
	ptrE->setWeight(99.3);
	ptrF->setfavTreat("Mint Bone");
	ptrE->setfavTreat("Beef Stick");

	cout<<"Frankie's Favorite person is : "<<ptrF->getfavPerson()<<endl;
	cout<<"Eddies' Favorite person is : "<<ptrE->getfavPerson()<<endl;

	cout<<"Frankies Weight is : "<<ptrF->getWeight()<<endl;
	cout<<"Eddies Weight is: "<<ptrE->getWeight()<<endl;
	
	cout<<"Frankies favorite treat is : "<<ptrF->getfavTreat()<<endl;
	cout<<"Eddies favorite treat is: "<<ptrE->getfavTreat()<<endl;
	Dog Jimmie= Eddie;
	ptrJ=&Jimmie;
	cout<<"Jimmies favorite treat is : "<<ptrJ->getfavTreat()<<endl;
	delete ptrN;
	ptrN=nullptr;
	return 0;
} 

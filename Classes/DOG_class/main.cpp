#include <iostream>
#include<string>
#include<cstring>
#include "Dog.h"
using namespace std;
int main() {	

	cout << "Hello World!\n";
	string a;
	string b;

	Dog Frankie;
	Dog Eddie;
	//dynamically allocating another dog
	//welcome to dog clsss printed twice
	Dog *ptrN=nullptr;
	ptrN=new Dog;

	Dog *ptrE=nullptr;
	Dog *ptrF=nullptr;
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

	
	return 0;
} 

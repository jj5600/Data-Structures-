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

	Dog *ptrE=nullptr;
	Dog *ptrF=nullptr;
	ptrF=&Frankie;
	ptrE=&Eddie;
	ptrF->setfavPerson("Joseph");
	ptrE->setfavPerson("Katie");

	cout<<"Frankies Favorite person is : "<<ptrF->getfavPerson()<<endl;
	cout<<"Eddies Favorite person is : "<<ptrE->getfavPerson()<<endl;


	
	return 0;
} 

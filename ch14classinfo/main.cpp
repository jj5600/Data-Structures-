//chapter 14 is sort of an extension of chapter 13 which is classes
// 14 is formally called : " More about classes"
// it covers
//14.1 instance & static members
//14.2 friends of classes
//14.3 memberwise assignments
//14.4 copy constructors
//14.5 operator overloading
//14.6 object conversion 
//14.7 Aggregation 

#include<iostream>
#include "animal.h"
using namespace std;
const int SIZE=4;
int main()

{	animal::changerandomVal(2);



	animal * doggie2=nullptr;
	doggie2= new animal;
	cout<<endl<<doggie2->getrandomVal()<<endl;
	animal dog;
	animal * dog3=nullptr;
	dog3= new animal;

	animal fish[SIZE];
	for(int i=0; i<SIZE; i++)
	{
		fish[i].changeWeight(3);

	}
	dog3->changeWeight(100);
	dog.changeWeight(33);
	doggie2->changeWeight(27);
	cout<<"here is the dogs weight"<<dog.getWeight();
	cout<<"\nwhats up\n";
	cout<<"Hrere is doggie2's weight: "<<doggie2->getWeight()<<endl;

	cout<<"Here is the animal count: "<<dog.getanimalCount()<<endl;
	cout<<"here is the total animal weight: "<<dog.getanimalWeight()<<endl;
	// here i am delting the dynamically allocated object
	// not freeing up this memeory could result in a memory leak
	
	//

	// Here i have assigned the values of dog 2 to dog 1
	//dog=*doggie2;
	cout<<"this is dog weight"<<dog.getWeight();
	printZ(*dog3);
	// here i have created a new dog(dog5 ) and set its values equal to the vals of dog 1
	animal dog5=dog;
	cout<<";;;;;;";
	delete doggie2;
	delete dog3;
	return 0;
}

// 14.1 if a member variable is declared static , then all instances have access to it
// if we have 2 instances of a class they each have their respective 
//member functions and member variables 
// weight in the animal class is an instance variable 
// static member variables and fucntions belong to the class 
// I created a static variable called get animal count
// what this does is coutn the number of instances of animal that
// are created.
//get animal weight does somethign similar by keeping count of the overall weight
// the next part of chapter 14.1 is Static memeber functions ;
// these are member functions that can be accessed witout needing to have an instance of a class created
// this is demonstrated by the random val function , which sets the static int :randomvalue to 2 before a class is created
//14.2 focuses on Friends of classes
// a friend is a fucntion that is not a member of a class, but has access to the private members of a class
// it has to be designated as a friend of that class
//printZ is a friend function that doesnt belong to any class, but was 
//able to access a privaate member in the animal class Z.
//14.3 is memeberwise functions
// with member wise assignment , we can use the = sign to assign the date of one object to another
// for example saying box1=box2 assigns all of box1s values to box 2
//14.4 covers copy constructors...a copy constructor is a type of constructor that is called whenever a new object is created
// and initialized with another objects data
// its important to have a copy constructor because 
// if a pointer is copied over , object one and object two  pointer both refer
//to the same member
//14.5 Operator overloading
 

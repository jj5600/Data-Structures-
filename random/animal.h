#ifndef ANIMAL_H
#define ANIMAL_H
#include<iostream>
using namespace std;

class animal
{
	public:
	animal();
	void changeAge(int);
	int getAge() const;
	private:
	int age;


};

#endif


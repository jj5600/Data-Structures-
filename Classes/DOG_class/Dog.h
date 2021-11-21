#ifndef DOG_H
#define DOG_H
#include<string>
using namespace std;
class Dog 
{
	private:
	double weight;
	string favperson;
	string favtreat;
	public:
	Dog();
	void setWeight(double w);
	void setfavPerson(string p);
	void setfavTreat(string t);

	double getWeight() const;
	string getfavPerson() const;

	//this is callled an inline funtion defintion 
	string getfavTreat() const
	{
		return favtreat;
	}
	

};


#endif

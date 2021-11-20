#ifndef DOG_H
#define DOG_H
#include<string>
using namespace std;
class Dog 
{
	private:
	double weight;
	string favperson;
	public:

	void setWeight(double w);
	void setfavPerson(string p);

	double getWeight() const;
	string getfavPerson() const;
	

};


#endif

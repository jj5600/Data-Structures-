#include <iostream>
#include <string>
using namespace std;
struct circle
{
	int radius;
	string name;


};
struct payInfo
{
	int hourly;

};
struct animal
{
	int weight;
	string name;
	string color;
	double cost;
	payInfo much;
};
void showitem(animal&);
// a struct allows multiple data types to be grouped together
// struct declaration does not allocate memory or create vars
int main() 
{	
	circle *cirptr=nullptr;
	cirptr= new circle;
	cirptr->radius=3;
	cirptr->name="A";
	cout<<cirptr->radius<<endl;
	cout<<cirptr->name<<endl;
	const int WORKERS=2;
	payInfo workers[WORKERS];// array of structures
	for(int i=0; i<WORKERS; i++)
	{	cout<<"Input the hourly pay of worker number "<<i<<": ";
		cin>>workers[i].hourly;
		cout<<"Hourly : "<<workers[i].hourly<<endl;

	}
	animal zebra;
	zebra.much.hourly=35;
	cout<<zebra.much.hourly<<endl;
	animal alligator;
	animal chicken;
	animal cat={10,"gato","white",100,22};
	showitem(cat);
	alligator.weight=200;
	chicken.weight=5;
	alligator.name="Jay";
	chicken.name="DJ";
	alligator.color="green";
	chicken.color="yellow";
	alligator.cost=700;
	chicken.cost=35;
	cout<<alligator.weight<<endl;
	cout<<alligator.name<<endl;
	cout<<"Lets rename the alligator: ";
	//cin.ignore();
	getline(cin,alligator.name);
	cout<<alligator.name<<endl;
	cout << "Hello World!\n";
	cout<<"Who weighs more?\n";
	if(alligator.weight>chicken.weight)

	{
		cout<<alligator.name<<" the alligator weighs more\n";
	}
	else 
	{
		cout<<chicken.name<<" the chicken weighs more\n";
	}
	cout<<cat.cost<<endl;
} 

void showitem(animal &a)
{	
	cout<<"--------\n";

	cout<<a.weight<<endl;
	cout<<a.name<<endl;
	cout<<a.color<<endl;
	cout<<a.cost<<endl;
	cout<<a.much.hourly<<endl;
	cout<<"--------\n";

}

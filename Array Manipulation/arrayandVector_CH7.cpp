#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
//vectors are 
using namespace std;
const int SIZE=3;
//constants ints are constantly used for this purpose
// it also eases maintence when the program or array size needs 
//to be changed. no hardcoding
// arrays must be accessed via individual elements
// a global arrays values are all initialized to 0
// a local arrays values are all unititialzied
void outputArray(int[],int);
void showArray(int[][SIZE],int);
int main()
{	vector<int> scores(30,0);
	
	//int vector, size 30 all elements initialized to zero
vector<int>another(scores);
vector<int>random{0,1,22,3,4,5,99};
cout<<random.size()<<endl;
random.push_back(1);
cout<<random.size()<<endl;
random.pop_back();
for(int a: random)
{
	cout<<random[a];

}
cout<<endl;
cout<<random.at(2)<<endl;


for(int a: random)
{

	cout<<random[a];
}

// this is initializing a vector to the size of another
	int x=5;
	int arrayj[SIZE]{0,1,2};
	//implicit array sizing can also be done
	int arrayb[]{0,1,2,3,4,5,6};
	int arrayc[3]{5,6,7};
	int arrayd[SIZE][SIZE]{{2,4,6},{8,10,12},{14,16,18}};
	outputArray(arrayc,SIZE);
	cout<<size(arrayb)<<endl;
	for(int AA=0; AA<SIZE; AA++)
	{
		for(int jj=0; jj<SIZE; jj++)
		{	// printing out the values of a 2d array
			cout<<arrayd[AA][jj]<<"\t";
		}

		cout<<endl;
	}
	//this is called a range based for loop !
	for(int rr : arrayb)
	{

		cout<<arrayb[rr]<<endl;
	}
	//this [3] allocates memory
	//int is the type of the array
	//arrayj is the name of the array
	//3 is the size declarator
	//size is number of elements * the size of each elem
	for(int i=0; i<SIZE; i++)
	{
		cout<<arrayj[i];
	}
	//cout<<endl<<x<<endl;
	cout<<size(arrayj)<<endl;
	//this prints the number of elements in the array
	cout<<sizeof(arrayj); 
	//sizeof prints the size in bytes

	showArray(arrayd,SIZE);
	return 0;
}
void outputArray(int arrayc[],int SIZE)
{
	for(int z=0; z<SIZE; z++)
	{

		cout<<arrayc[z];

	}
	cout<<"leaving outputarray function\n";
}
void showArray(int a[][SIZE],int SIZE)
{	cout<<"we are in show array"<<endl;
	for(int i=0; i<SIZE; i++)
	{
		for(int j=0; j<SIZE; j++)
		{

			cout<<a[i][j]<<"\t";
		}

		cout<<endl;	

	}



}

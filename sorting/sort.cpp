#include <iostream>
using namespace std;
const int SIZE=6;
const int ARR=8;
//there are multiple search types, two of them are 
//linear search and binary search
//linear search is also called sequential search and 
//starts at the beginning of the array and looks for the 
//word to search for 
//PROS: easy to understand 
//CONS: slow and worst case O(n) best case O(1)\

//BinarySearch
//PROS: worst case log2(n) best case log(1)
//CONS: must be sorted!

//bubble sort
//easy to understand , but very slow algo

int searchlist(int [],const int,int);
int binarysearch(int[],const int, int);
void bubblesort(int[],const int);


int main() {
	int numlist[SIZE]{0,1,2,3,4,5};
	int bublist[ARR]{7,6,5,4,3,2,1,0};
	for(int i=0; i<SIZE; i++)
	{
		cout<<numlist[i]<<endl;


	}
	cout<<endl<<searchlist(numlist,SIZE,2)<<endl;
	cout<<binarysearch(numlist,SIZE,2)<<endl;
	bubblesort(bublist,ARR);

  cout << "Hello World!\n";
	return 0;

}
int searchlist(int numlist[],const int SIZE,int num)
{	int index=0;// this is the index of the array
	bool found=false; // found status
	int position=-1;	// position of found element
	while(index<SIZE && found==false)
	{

		if(numlist[index]==num)
		{	
			found=true; //sets status flag to true
			position=num;//
		}

		index+=1;

	}
	return position;
}
int binarysearch(int numlist[],const int SIZE, int num)
{
		int first=0;
		int last=SIZE;
		int mid;
		int position=-1;
		bool found=false;

		while(found==false&& first<=last)
		{
			mid=(first+last)/2;
			if(numlist[mid]==num)
			{
				found=true;
				position=num;
			}

			else if(numlist[mid]>num)
			{
				last=mid-1;
			}
			else 
				first=mid+1;

		}
		return position;

}
void bubblesort(int numlist[],const int SIZE)
{
	bool swap;
	int temp;
	do
	{
			swap=false;

			for(int count=0; count<SIZE-1; count++)
			{
				if(numlist[count]>numlist[count+1])
				{
					temp=numlist[count];
					numlist[count]=numlist[count+1];
					numlist[count+1]=temp;
					swap=true;

				}

			}

	}while(swap==true);

	for(int i=0; i<SIZE; i++)
	{
		cout<<numlist[i]<<"\t";
	}

}

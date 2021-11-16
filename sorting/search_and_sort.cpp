#include<iostream>

using namespace std;
const int SIZE=6;
//there are various kinds of searching and sorting algos
//two basic search algos are linear and binary search
//binary requires a sorted list
//linear doesnt require a sorted list
//linear search has O(N) complexity
//binary search has O(log(N))

int linearSearch(int(&)[SIZE],int);
int binarySearch(int(&)[SIZE],int);
void sortArray(int(&)[SIZE]);
void displayArray(int(&)[SIZE]);

int main()
{
int arrayT[SIZE]{1,5,6,92,5,7};0

int arrayZ[SIZE]{0,1,2,3,4,5};
int zz;
cout<<"Please enter a value to search for: ";
cin>>zz;
cout<<"this is the position: "<<linearSearch(arrayT,zz)<<endl;

cout<<"This is the postion: "<<binarySearch(arrayZ,5)<<endl;
displayArray(arrayT);
cout<<endl;
sortArray(arrayT);
displayArray(arrayT);
cout<<endl;
return 0;
}
int linearSearch(int (&a)[SIZE],int search)
{	int position=-1;
	for(int i=0; i<SIZE ; i++)
	{
		if(a[i]==search)
		{
			position=i;
		}
	}
	if(position==-1)
	{
		cout<<"does not exist:";
	}
	return position;
}
int binarySearch(int (&a)[SIZE],int search)
{ int middle=0;
	int first=0;
	int last=SIZE-1;
	bool flag= false;
	int position=-1;
	while(!flag && first<= last)
	{
		middle=(first+last)/2;
		if(a[middle]==search)
		{
			flag=true;
			position=middle;
		}
		if(a[middle]>search)
		{
		last=middle-1;

		}
		if(a[middle]<search)
		{
			first=middle+1;


		}


	}

	return position;

}
void sortArray(int(&a)[SIZE])
{
	bool swap;
	int temp;
	do{
		swap=false;
		for(int i=0; i<SIZE-1; i++)
		{
				if(a[i]>a[i+1])
				{

					temp=a[i];
					a[i]=a[i+1];
					a[i+1]=temp;
					swap=true;

				}

		}




	}while(swap);
	

}
void displayArray(int (&a)[SIZE])
{
	for(int i=0; i<SIZE; i++)
	{

		cout<<a[i]<<"\t";



	}

}

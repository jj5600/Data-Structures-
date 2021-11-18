#include<iostream>
using namespace std;
const int SIZE=25;
int displaymenu();
void displayArray(char *);
void displayVowels(char *);
void findChar(char *, char);
void changeCol(char *);
int main()
{	int choice=-1;
	char * arrptr=nullptr;
	
	char arrayT[]{'s','w','e','e','t'
								,'h','e','a','r','t'
								,'e','g','r','i','t'
								,'c','l','o','n','e'
								,'o','d','o','r','s'};
	arrptr=arrayT;

	

	while(choice !=5)
	{
			choice=displaymenu();
			switch(choice)
			{
				case 1: 
				cout<<"case 1\n";
				changeCol(arrptr);
				break;
				case 2:
				cout<<"case 2\n";
				displayVowels(arrptr);
				break;
				case 3:
				cout<<"case 3\n";
				displayArray(arrptr);
				break;
				case 4:
				cout<<"case 4\n";
				char temp;
				cout<<endl<<"Please enter a char to search for: ";
				cin>>temp;
				findChar(arrptr,temp);
				break;
				default:
				cout<<"please enter something valid:\n";
			
			}







	}


	cout<<"Goodbye.....\n";

	return 0;
}

int displaymenu()
{
	int choice;
		cout<<"1.  Interchange column 1 with column 4\n"
				<<"2.  Display the total number of vowels\n"
				<<"3. Display the array in a matrix (rows and columns)\n"
				<<"4.  Search for and display number of instances of any given character\n"
				<<"5.  Exit\n"
				<<"Choose an option: ";
		cin>>choice;
	return choice;

}

void displayArray(char * a)
{	
	for(int i=0; i<SIZE; i++)
	{
		cout<<*(a+i)<<"\t";
		if((i+1)%5==0)
		{
			cout<<endl;

		}

	}
	
	cout<<endl;
}
void displayVowels(char * a)
{
	char t; 
	int count=0;
	for(int i=0; i<SIZE; i++)
	{
		
		t=*(a+i);
		if(t=='a'||t=='e'||t=='i'||t=='o'||t=='u')
		{

			count+=1;
		}

	}
	cout<<"the num of vowels: "<<count<<endl;

}
void findChar(char * a, char c)
{	char t;
	int count=0;
	for(int i=0; i<SIZE; i++)
	{
		t=*(a+i);
		if(t==c)
		{

			count+=1;
		}


	}
	cout<<c<<" occured : "<<count<<" time(s)"<<endl;

}
void changeCol(char * a)
{	char temp;
	for(int i=0; i<SIZE; i=i+5)
	{
		temp=*(a+i);
		*(a+i)=*(a+(i+3));
		*(a+(i+3))=temp;

	}

	cout<<"-----DONE-----\n";

}

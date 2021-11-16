#include <iostream>
using namespace std;
const int SIZE=5;
int displayMenu(); 
void displayArray(char[][SIZE],int );
void swapC(char(&)[SIZE][SIZE]);
void displayVowels(char(&)[SIZE][SIZE]);
void findChar(char(&)[SIZE][SIZE],char);
int main() 
{
	int choice=0;


	char arrayA[SIZE][SIZE]{{'s','w','e','e','t'},
											    {'h','e','a','r','t'},
													{'e','g','r','i','t'},
													{'o','d','o','r','s'}
												 };
	
  cout << "Hello World!\n";
	while(choice!=5)
	{
		choice=displayMenu();
		switch(choice)
		{
			case 1:
			cout<<"choice 1\n";
			swapC(arrayA);
			break;
			case 2:
			cout<<"choice 2\n";
			displayVowels(arrayA);
			break;
			case 3:
			cout<<"choice 3\n";
			displayArray(arrayA,SIZE);
			break;
			case 4:
			cout<<"choice 4\n";
			char z;
			cout<<"Please enter a char: ";
			cin>>z;
			findChar(arrayA,z);
			

			break;
			default:
			cout<<"Please enter a valid choice\n";
		

		}

	}
	cout<<"Goodbye";
	return 0;
} 

int displayMenu()
{	int choice;
	cout<<"1.  Interchange column 1 with column 4\n"
			<<"2.  Display the total number of vowels\n"
			<<"3. Display the array in a matrix (rows and columns)\n"
			<<"4.  Search for and display number of instances of any given character\n"
			<<"5.  Exit\n"
			<<"Choose an option: ";
	cin>>choice;
	return choice;
}
void displayArray(char arrayT[][SIZE],int a)
{

		for(int i=0; i<SIZE; i++)
		{
			for(int j=0; j<SIZE; j++)
			{
				cout<<arrayT[i][j]<<"\t";
			}
				cout<<endl;
		}
}

void swapC(char(&c)[SIZE][SIZE])
{	char temp;

	for(int i=0; i<SIZE; i++)
	{	
		temp=c[i][0];
		c[i][0]=c[i][3];
		c[i][3]=temp;
	}

}
void displayVowels(char (&a)[SIZE][SIZE])
{	int count=0;
	char t;
	for(int i=0; i<SIZE; i++)
	{
		for (int j=0; j<SIZE; j++)
		{
			t=a[i][j];
			if(t=='a'||t=='e'||t=='i'||t=='o'||t=='u')
			{

				count+=1;
			}

		}

	}
	cout<<"Total num of vowels are: "<<count<<endl;

}
void findChar(char (&c)[SIZE][SIZE],char t)
{	
	int count=0;
	for(int i=0; i<SIZE; i++)
	{

		for(int j=0; j<SIZE; j++)
		{
			if(c[i][j]==t)
			{
				count+=1;
			}

		}




	}


	cout<<"Here are total number of "<<t<<" in the array: "<<count<<endl;



}

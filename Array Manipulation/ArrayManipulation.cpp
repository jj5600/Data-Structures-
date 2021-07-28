/* * * Joseph Marquez * * Array Manipulation  * * July 28, 2021 * */
#include <iostream>
#include <iomanip>
using namespace std;
// global constatns and fucntion prototypes
const int ROW=5; //formerly row
const int COL=5; //formerly columns
void showmenu(); 
void swapcol(char[][COL],int); 
void showarray(char[][COL],int); 
void showvowel(char[][COL],int); 
void showchar(char[][COL],int); 


int main()
{
    int menuNumber; // Number chosen by user
    const int interChange =1,// constants for menu choices
              displayVowel=2,
              displayArray=3,
              searchForChar=4,
              theexitchoice=5;
    char words[ROW][COL]={  {'s','w','e','e','t'}, // declaration of 5x5 array with requested words
                                {'h','e','a','r','t'},  
                                {'e','g','r','i','t'},
                                {'c','l','o','n','e'},
                                {'o','d','o','r','s'}  };
    do{
        showmenu(); 
        cin>>menuNumber;
        
        while(menuNumber< interChange || menuNumber >theexitchoice) // corrects the user if they make an invalid choice
        { cout<<"Pleases pick a valid choice: ";
             cin >> menuNumber;
        }
        
        if(menuNumber != theexitchoice) // choice 1-4 options
        { 
            switch(menuNumber)
            {
                case interChange: // choice 1 interchanging
                    swapcol(words,ROW);
                    break;
                case displayVowel:// choice 2 displaying the vowel
                    showvowel(words,ROW);
                    break;
                case displayArray: // choice 3 showing the array
                    showarray(words,ROW);
                    break;
                case searchForChar: // this choice searches for a given character in the given array
                    showchar(words,ROW);
                    break;
                
            }
        }
        
        } while(menuNumber != theexitchoice);
            cout<<"Goodbye........";
            return 0;
}
// ********************************************************
// name:      showmenu
// called by: main
// passed:    none
// returns:   nothing
// calls:     nothing
// The showmenu displays the menu options for the user    *
// ********************************************************

void showmenu()
{
    cout<<"\nMenu\n"
        << "1. Interchange column 1 with column 4\n"
        << "2. Display the total number of vowels\n"
        << "3. Display the array in a matrix (rows and columns)\n"
        << "4. Search for and display the number of instances of any given character\n"
        << "5. Exit\n"
        << "Enter your choice: ";
}

// ********************************************************
// name:      showarray
// called by: main
// passed:    char words[][COL],ROW
// returns:   nothing
// calls:     nothing
// The showarray function prints out the array for the user*
// ********************************************************

void showarray(char words[][COL], int ROW)// this is the show array fucntion  
{   int y=0;
    for(int x=0;x<ROW;x++) // this iterates throught the rows
    {   
        for(int y=0;y< COL; y++) // this iterates through the columns
        {
            
            cout<<setw(4)<< words[x][y]<<"";
        }
        cout<<endl;
        
    }
}

// ********************************************************
// name:      showvowel
// called by: main
// passed:    char word[][COL], int ROW
// returns:   nothing
// calls:     nothing
// The showvowel function iterates through the  array and  *
// counts the number of vowels that are present          *
// ********************************************************

void showvowel(char words[][COL],int ROW) // this counts the vowels in the passed array
{   int y=0;
    int count=0;
    for(int x=0;x<ROW;x++)
    {   
        for(int y=0;y< COL; y++)
        { 
            if(words[x][y]=='a'||words[x][y]=='e'||words[x][y]=='i'||words[x][y]=='o'||words[x][y]=='u') // adds to count if any of these requirements are met
            {
            count=count+1;
            //cout<< "current count is "<< count<< endl;
            }
            else
            continue;
        }
    }
    cout<<"The number of vowels are: "<<count<<endl; // printing out the total number of vowels
}

// ********************************************************
// name:      showchar
// called by: main
// passed:    charwords[][COL],int ROW
// returns:   nothing
// calls:     none
// The showchar function iterates through the    *
//  array and finds the specific char the user desires *
// ********************************************************

void showchar(char words[][COL],int ROW)
{   char temp;
    int count=0;
    cout<<"Please type the char you'd like to search for: ";
    cin >> temp; // prompting the user to type in the character they want to search for
    int y=0;
    for(int x=0;x<ROW;x++)
    {   
        for(int y=0;y< COL; y++)
        {
            if(words[x][y]== temp) // comparing the current element to the char they want to search for
            {
            count=count+1;
            //cout<< "current count is "<< count<< endl;
            }
            else
            continue;
        }
    }
    cout<<" "<<temp<<" occurs: "<< count<<" time(s)";
}
// ********************************************************
// name:      swapcol
// called by: main
// passed:    char words[][COL],int ROW
// returns:   nothing
// calls:     nothing
// The swapcol fucntion swaps the first and 4th columns  *  
// ********************************************************

void swapcol(char words[][COL],int ROW)
{
    int y=0;
    int z=3;
    char temp;
    for(int x=0;x<ROW;x++) // iterates through the rows
    {   
        temp= words[x][y];  //  swaps the 1st and 4th elements respective to the current row
        words[x][y]=words[x][z];
        words[x][z]= temp;
    
    }
    cout<<"Done swapping columns-----"; // letting the user know that the swapping process is done
    
}




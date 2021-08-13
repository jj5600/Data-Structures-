/******************************************************************************
Horizontal Bar Graph- showing frequency of each letter
*******************************************************************************/
#include <iostream>
#include <cctype>
#include<iomanip>
#include<locale>
using namespace std;

int main(int argc, char *argv[], char **env)
{   char c;
    char v;
    int largest;
    int num[0];
  
    //int lines = atoi(getenv("LINES"));
    //int cols  = atoi(getenv("COLUMNS"));
    int COLS=atoi(getenv("COLUMNS"));
    int count[26]={0};
    char alph[26]=
    {'a','b','c','d','e','f','g','h','i','j','k','l','m','n',
    'o','p','q','r','s','t','u','v','w','x','y','z'};
    while ( ! cin.eof() ) 
    {
	    c = tolower( cin.get() ) ;
	    if(isalpha(c)) 
	    {   
	        count[c - 'a']++;
		    //count [c - 'a']++ ; // use the character's value to access the array element	
	    }
    }
    largest = count[0];
   for(int t = 1;t < 26; t++) //this identifies the largest number
   {
      
      if(largest < count[t])
         largest = count[t];
         
   } 
 
    for(int i=0; i<26; i++) // outputs table and horiz histogram.
    {
        int to = double ((count[i])*COLS)/(largest);
     
        cout<<alph[i]<<"\t" <<count[i]<<"\t"<<":";
        for(int ab=0; ab<to;ab++)
        {
            cout<<"=";
            
        }
        cout<<"\n";
    }

    return 0;
}


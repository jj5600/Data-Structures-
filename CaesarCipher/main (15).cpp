/*-----------------------------------------------------------------
*	Accepts a command line arg and sifts the input for alpha character 
*	It then places chars in a matrix and outputs them column major 
*	wise for encryption purposes
-----------------------------------------------------------------*/
#include <cstdio>
#include <cctype>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <math.h>

using namespace std ;

int main (int argc, char *argv[], char **env)
{
	string s ;
	char c  = cin.get() ;
	while(!cin.eof())
	{
		if (isalpha(c))
		{
			s = s + c ;
		} // if isalpha
		c = cin.get() ;
	}// while not eof
	cout << s << endl ;

    
        
        int testv= sqrt(s.length()); //finds the sqrt
        //cout<<testv<<endl;
        if(testv*testv!=s.length()) // because of truncation , evals if testv was rounded 
        {
        testv=testv+1; //add 1 to sqrt val if rounded
        }
        
        
        
        char cs[testv][testv]; //create an array based on testv val
        
        
		int count = 0 ;
	
      
		count = 0 ; 
		for ( int i = 0 ; i < testv ; ++i) //store string in array
		{
			for ( int j = 0 ; j < testv ; ++j)
			{
				cs[i][j] = s[count++] ; 
				
			}
			
			
		}
    cout<<endl;
		for (int i = 0 ; i < testv ; ++i) // output array in column major form
		{
			for (int j = 0 ; j < testv ; ++j)
			{
				
					cout.put(cs[j][i]) ;
			}
		}
cout.put('\n') ;
} // main ends

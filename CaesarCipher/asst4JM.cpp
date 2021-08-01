/**
 * CISC 192 - Asst 4- Caesar Cipher:
 * Joseph Marquez - Orxy19 
 * This program accepts input from the user and performs the caesar cipher 
 * encryption based on the shift value that is passed via command inline
 * key function is: convert which once identified as an alphabetic value, 
 * performs the shift to the current var based on the shift val passed.
 **/

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <iomanip>
#include <cstdio>
#include <cctype>

using namespace std;
int convert(char c, int * sptr)
{
    
    c=(char) tolower(c);
	int zz=c-'a';
	zz=zz+*sptr;
	zz=zz%26;
	zz=zz+'a';

	if(c!='\n')
	   {
	    cout.put(zz);
	   }
}

int main(int argc, char * argv[])
{   
    int shift = atoi (argv[1]) ;
    int *sptr= &shift;
    
	char c ; 
	
	c = cin.get() ; 

	if(isalpha(c))
	{   
	    convert(c,sptr);
	    
	}
	else
	    cout.put(c);

	while ( !cin.eof() ) 
	{
	    int z;
	    char bb;
	    bb=cin.get();
	    if(isalpha(bb))
	    {  
	        convert(bb,sptr);
	        
	    }
	    else
	    cout.put(bb);
    }
    return 0;
}


    




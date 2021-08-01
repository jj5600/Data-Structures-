#include "inventory.h"
// this is the constructor that sets the initial vals
inventory::inventory ()
{
  checkInNumber = 0;
  damageDesc="";
  customerLast="";
  priceQuoted=0;
  hoursWorked=0;
  custPhone="";
}
// this is the accessor function for the price quoted
float inventory::dpriceQuoted () const
{
    
    return priceQuoted;
    
    
}
// this is the mutator function for the price quoted
void inventory::cpriceQuoted(float a) 
{
    if(a>=0)
    {
    priceQuoted=a;
    }
    if(a<0)
    {
        
        cout<<"price quoted less than 0";
        exit(EXIT_FAILURE);
    }
   
    
    
    
}
string inventory::dcustPhone() const
{   
    return custPhone;
    
    
}
void inventory::ccustPhone(string a)
{
    if(a.length()<11)
    {
        custPhone=a;
    }
    if(a.length()>11)
    {
        
        exit(EXIT_FAILURE);
    }
    
}
string inventory::dcustomerLast() const
{

    return customerLast;
    
}
void inventory::ccustomerLast (string a)
{
   
  
    if(a.length()<25)
    {
        customerLast=a;
    }
    if(a.length()>25)
    {
        
        exit(EXIT_FAILURE);
    }
    
}
string inventory::ddamageDesc () const
{
   
    return damageDesc;
    
}
void inventory::cdamageDesc (string a) 
{
    if(a.length()<25)
    {
        damageDesc=a;
    }
    if(a.length()>25)
    {
        
        exit(EXIT_FAILURE);
    }
  
    
    
}

int inventory::dcheckInNum () const 
{

  //cout<<"this worked";
  
return checkInNumber;

}
float inventory::dhoursWorked() const
{   
   
    return hoursWorked;
}
void inventory::choursWorked(float a)
{
    if(a>=0)
    {
    hoursWorked=a;
    }
    if(a<0)
    {
        
        cout<<"hours worked less than 0";
        exit(EXIT_FAILURE);
    }
    
    
}


void inventory::ccheckInNum (int x)
{

  checkInNumber = x;
  
}

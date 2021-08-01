/******************************************************************************

Classes in C++
Creating an array of 5 objects that store the last name,phone number, cust number
hours worked, price quoted, and a description. Accessor functions prefixed 'd'
and mutators prefixed 'c'

*******************************************************************************/
#include <iostream>
#include <string>
#include "inventory.h"
using namespace std;
const int SIZE=5;
int main()
{   
    cout<<"Repair Shop\n";
    
    //inventory food;
    inventory food;
    int status=0;
    inventory array[SIZE];
    //cout<<array[0].ddamageDesc()<<endl;
    for(int i=0;i<SIZE;i++)
    {   string tempd,templ,tempn,tempp,temph;
        array[i].ccheckInNum(i+1); //assigns the user val
        
        //this block is for the damage entry
        cout<<"Please enter a description of the damage: ";
        getline(cin,tempd);
        while(tempd.length()>25)
        {
            cout<<"string too long please enter a description shorter than 25 chars: ";
            getline(cin,tempd);
        }
        array[i].cdamageDesc(tempd);
        
        
        //this block is for the last name entry
        cout<<"Please enter your last name: ";
        getline(cin,templ);
        while(templ.length()>25)
        {
            cout<<"string too long please enter a lastname up to 25 chars: ";
            getline(cin,templ);
            
        }
        array[i].ccustomerLast(templ);
        
        
        //this block is for the phone number entry
        cout<<"Please enter a phone number(without dashes/spaces): ";
        getline(cin,tempn);
        while(tempn.length()>11)
        {
            cout<<"string too long please be less than 11 chars: ";
            getline(cin,tempn);
            
        }
        array[i].ccustPhone(tempn);
        
        
        //this is for the price quoted
        TEST:
        cout<<"Please enter the price quoted: ";
        getline(cin,tempp);
        int temp;
        
        for(int i=0; i<tempp.length();i++)
        {
            
           
                if(isalpha(tempp[i]))
                {
                    cout<<"please retype the num\n";
                    status=1;
                    goto TEST;
                }
            
            
        }
       if(status==0)
       {
        float a=stof(tempp);
        if(a>=0)
        {
        array[i].cpriceQuoted(a);
        }
        if(a<0)
        {
            cout<<"val is less than one\n";
            goto TEST;
        }
            
       }
       
       int status1=0;
        TEST1:
        // this block is for the hours worked
        cout<<"Please enter the hours worked: ";
        getline(cin,temph);
        for(int i=0; i<temph.length();i++)
        {
            
           
                if(isalpha(temph[i]))
                {
                    cout<<"please retype the val\n";
                    status1=1;
                    goto TEST1;
                }
            
        }
    
        float b=stof(temph);
    
        if(b>=0)
        {
            array[i].choursWorked(b);
        }
        if(b<0){
            cout<<"val is not greater than or equal to 1\n";
            goto TEST1;
        }
        
    }  
    float counter=0;
    for(int t=0; t<SIZE; t++)
    {
        cout<<"\n Here are the values\n";
        cout<<"Damage Description: "<<array[t].ddamageDesc()<<endl;
        cout<<"Customer LastName: "<<array[t].dcustomerLast()<<endl;
        cout<<"Customer Phonenum: "<<array[t].dcustPhone()<<endl;
        cout<<"Price Quoted: "<<array[t].dpriceQuoted()<<endl;
        cout<<"Hours Worked: "<<array[t].dhoursWorked()<<endl;
    counter=counter+array[t].dpriceQuoted();
    }
    cout<<"\nTotal price "<<counter<<endl;
   
    
    return 0;
}

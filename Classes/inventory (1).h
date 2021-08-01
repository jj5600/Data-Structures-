#ifndef INVENTORY_H
#define INVENTORY_H
#include<string.h>
#include<stdlib.h>
#include<iomanip>
#include<string>
#include<iostream>
using namespace std;

class inventory
{
    
    public:
    inventory();
    
    int dcheckInNum() const;
    void ccheckInNum(int);
    
    string ddamageDesc() const;
    void cdamageDesc(string);
    
    string dcustomerLast() const;
    void ccustomerLast(string);
    
    string dcustPhone() const;
    void ccustPhone(string);
    
    float dpriceQuoted () const;
    void cpriceQuoted(float);
    
    float dhoursWorked() const;
    void  choursWorked(float);
    
    
    //~inventory();
    private:
    unsigned int checkInNumber;
    string damageDesc;
    string customerLast;
    string custPhone;
    float priceQuoted;
    float hoursWorked;
    
    
    

};
#endif
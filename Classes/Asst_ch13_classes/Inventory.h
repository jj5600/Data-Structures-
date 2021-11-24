#ifndef INVENTORY_H
#define INVENTORY_H
#include <string>
using namespace std;
class Inventory
{
	private:
	int checkInNumber;
	string damageDesc;
	string customerLast;
	string custPhone;
	float priceQuoted;
  float hoursWorked;

	public:
	Inventory();
	//THES ARE ALL ACCESSOR FUNCTIONS(INLINE defintion)
	int getcheckInNumber() const //
	{
		return checkInNumber;
	}
	string getdamageDesc() const //
	{
		return damageDesc;
	}
	string getcustomerLast() const//
	{
		return customerLast;
	}
	string getcustPhone() const //
	{
		return custPhone;
	}
	float getpriceQuoted() const //
	{
		return priceQuoted;
	}
	float gethoursWorked() const//
	{
		return hoursWorked;
	}
//these are all mutator functions

	void setcheckInNumber(int a); //done
	void setdamageDesc(string a);         //done
	void setcustomerLast(string a);      //done
	void setcustPhone(string a);        //done
	void setpriceQuoted(float a);      //done
	void sethoursWorked(float a);			//done

	
	


};

#endif

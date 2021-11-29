#ifndef BUDGET_H
#define BUDGET_H
#include "Office.h"
class Budget {

private:
	double budgetVal;
	static double taxVal;
public:
	Budget();
	~Budget();



	friend void Office::addBud(double,Budget&);
	friend double Office::rBud(Budget&);

};
#endif

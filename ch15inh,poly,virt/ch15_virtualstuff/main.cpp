#include <iostream>
#include "CsStudent.h"
#include <string>
using namespace std;
// pure vitual function MUST be overridden
int main ()
{
	CsStudent student("J M","822234836A",2020);
	cout<<"whats up\n";
	student.setMathHours(12);
	student.setCsHours(20);
	student.setGenEdHours(40);

	cout<<"The student: "<<student.getName()<<endl;
	cout<<"Hours left: "<<student.getRemainingHours()<<endl;
	return 0;
}

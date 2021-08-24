/******************************************************************************
Classes utitlizing inhertiance : example with payroll

*******************************************************************************/
#include <iostream>

using namespace std;
#include "Employee.h"
#include "SalariedEmployee.h"
#include "HourlyEmployee.h"
 
int main()
{
    Employee emp(11111, "Doe","John", 'J', 11);
    SalariedEmployee empSal(22222, "Smith", "Mary", 'M',22, 59900);
    HourlyEmployee empHr(33333, "Jones", "Jay", 'J',33,15.25, 40);
    
    emp.display(cout); cout<<endl;
    empSal.display(cout); cout<<endl;
    empHr.display(cout); cout<<endl;
    

    
}

#include "Employee.h"
#ifndef SALARIED_EMPLOYEE
#define SALARIED_EMPLOYEE
class SalariedEmployee : public Employee
{
    public:
    //SalariedEmployee constructor
    SalariedEmployee (long id =0, string last="",
                        string first="", char initial =' ',
                        int dept=0, double salary=0);
    //output function member
    void display(ostream & out) const;
    
    private:
    double mySalary;
    
};

inline SalariedEmployee::SalariedEmployee
                        (long id, string last, string first,
                        char initial, int dept, double sal)
:Employee(id, last, first, initial, dept),
 mySalary(sal)
{
}
inline void SalariedEmployee::display(ostream & out) const
{
   Employee::display(out);
   out<<"$"<<mySalary<<endl;
    
}
#endif


                        

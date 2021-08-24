#include <iostream>
#include <string>
#ifndef EMPLOYEE
#define EMPLOYEE

class Employee
{
    public:
    //this is the employee constuctor 
        Employee(long id=0, string last="", string first = "", 
                    char initial =' ', int dept = 0);

    // this is the display function 
        void display(ostream & out) const;
    
    private:
    
        long myIdNum;
        string myLastName;
        string myFirstName;
        char myMiddleInitial;
        int myDeptCode;
};
// this is employees constructor 
inline Employee::Employee(long id, string last, string first, 
                            char initial, int dept)
    : myIdNum(id), myLastName(last),myFirstName(first),
      myMiddleInitial(initial), myDeptCode(dept)
      { }
inline void Employee::display(ostream & out) const
{
    out<<myIdNum<<' '<<myLastName<<", "
       <<myFirstName<<' '<<myMiddleInitial<<" "
       <<myDeptCode << endl;
     
}



inline ostream & operator<<(ostream & out, const Employee & emp)
    {
      emp.display(out);
      return out;
    
    };
    
#endif
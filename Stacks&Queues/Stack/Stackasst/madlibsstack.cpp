/******************************************************************************
Dynamic Stack
Implementing Dynamic Stack
menu driven program 
Using Dynamic Stack Template
*******************************************************************************/
#include <iostream>
#include <string>
#include <sstream>
#include "DynamicStack.h"

using namespace std;

const int PUSH_NOUN=1,
            POP_NOUN=2,
            PUSH_VERB=3,
            POP_VERB=4,
            CONCAT=5,
            ADD_S=6,
            DISPLAY_B=7,
            M_STORY=8,
            QUIT_CHOICE=9;
void menu(int &);
void getStackSize(int &);
void pushItem(DynamicStack<string> &);
void popItem(DynamicStack<string> &);
string validate(string &temp);
bool isNum(string num);
int NOUNCOUNT=0;
int VERBCOUNT=0;
int TEMPCOUNT=0;
string temp,tempa,tempb,tempc="";

int main()
{
    int choice;
    string noun,verb;
    DynamicStack<string> stack;
    DynamicStack<string> nounS;
    DynamicStack<string> verbS;
    
    
    do
    {
        menu(choice);
        if(choice!=QUIT_CHOICE)
        {
            switch(choice)
            {
                case PUSH_NOUN:
                    cout<<"Please input a Noun to push on the stack\n";
                    cin>>noun;
                    noun=validate(noun);
                    nounS.push(noun);
                    NOUNCOUNT+=1;
                    break;
                case POP_NOUN:
                    if(NOUNCOUNT==0)
                    {
                       cout<<"Noun Stack is empty\n";
                       break;
                    }
                    nounS.pop(noun);
                    cout<<noun;
                    NOUNCOUNT-=1;
                    cout<<"-----DONE------\n";
                    break;
                case PUSH_VERB:
                    cout<<"Please input a Verb to push on the stack\n";
                    cin>>verb;
                    verb=validate(verb);
                    verbS.push(verb);
                    VERBCOUNT+=1;
                    cout<<"-----DONE-----\n";
                    break;
                    
                case POP_VERB:
                    if(VERBCOUNT==0)
                    {
                       cout<<"Verb Stack is empty\n";
                       break;
                    }
                    verbS.pop(verb);
                    cout<<verb;
                    VERBCOUNT-=1;
                    cout<<"-----DONE------\n";
                    break;
                case CONCAT:
                    if(NOUNCOUNT<2)
                    {
                       cout<<"Not enough nouns\n";
                        break;
                            
                    }
                    
                    nounS.pop(tempa);
                    nounS.pop(tempb);
                    NOUNCOUNT-=2;
                    tempc=tempa+tempb;
                    if(tempc.size()>10)
                    {
                        tempc.resize(10);
                        
                    }
                    nounS.push(tempc);
                    NOUNCOUNT+=1;
                    cout<<"\n-----DONE------\n";
                    break;
                    
                case ADD_S:
                    if(NOUNCOUNT==0)
                    {
                        cout<<"Noun Count is empty\n";
                        break;
                    }
                    nounS.pop(tempc);
                    NOUNCOUNT-=1;
                    tempc.resize(9);
                    tempc=tempc+"s";
                    nounS.push(tempc);
                    NOUNCOUNT+=1;
                    break;
                    
                case DISPLAY_B:
                    cout<<"Displaying noun stack\n";
                    cout<<"----------------------\n";
                        while(NOUNCOUNT !=0) //validates them for not being empty
                        { nounS.pop(tempc);
                            NOUNCOUNT=NOUNCOUNT-1;
                            cout<<tempc<<"\n";
                            string x = tempc;
                            stack.push(x);
                            TEMPCOUNT+=1;
                        }
                        while(TEMPCOUNT !=0) //validates them for not being empty
                        {   stack.pop(tempc);
                            TEMPCOUNT=TEMPCOUNT-1;
                            string x= tempc;
                            nounS.push(x);
                            NOUNCOUNT=NOUNCOUNT+1;
                        }
                        cout<<"Displaying verb stack\n";
                        cout<<"----------------------\n";
                        while(VERBCOUNT !=0)
                        { verbS.pop(tempc);
                            VERBCOUNT=VERBCOUNT-1;
                            cout<<tempc<<"\n";
                            string x = tempc;
                            stack.push(x);
                            TEMPCOUNT+=1;
                        }
                        while(TEMPCOUNT!=0)
                        {   stack.pop(tempc);
                            TEMPCOUNT=TEMPCOUNT-1;
                            string x= tempc;
                            verbS.push(x);
                            VERBCOUNT=VERBCOUNT+1;
                        }
                        
                    break;
                case M_STORY:
                    if(NOUNCOUNT>=4&&VERBCOUNT>=4)
                    { //cout<<"make story\n";
                    cout<<"It was your birthday and it smelled of fresh: ";
                        nounS.pop(tempc);
                        cout<<tempc;
                    cout<<" .The smell carried through the house and filled your nose ";
                    cout<<"Suddenly a: ";
                        nounS.pop(tempc);
                        cout<<tempc;
                    cout<<" began yelling about programming in C++ ";
                    cout<<"you then got up and started: ";
                        verbS.pop(tempc);
                        cout<<tempc;
                    cout<<" .Then everyone stopped and stared at the cute: ";
                        nounS.pop(tempc);
                        cout<<tempc;
                    cout<<" on your:";
                        nounS.pop(tempc);
                        cout<<tempc;
                    cout<<" . Suddenly a tiger began: ";
                        verbS.pop(tempc);
                        cout<<tempc;
                    cout<<" at the same time you began: ";
                        verbS.pop(tempc);
                        cout<<tempc;
                    cout<<" .Kung Fu panda then emerged and was \n";
                        verbS.pop(tempc);
                        cout<<tempc;
                    break;
                       
                    }
                    else{
                        cout<<"You need 4 Verbs and 4 Nouns\n";
                        cout<<"You currently have: "<<VERBCOUNT<<"verbs "<<"and"<<NOUNCOUNT<<" nouns\n";
                        break;
         
                        }
                
            }
        }
    }while(choice!=QUIT_CHOICE);
    cout<<"DONE ---- BYE BYE";
    return 0;
}

void menu(int &choice)
{
    cout<<"1.  Push Noun (push a noun onto the Noun Stack)\n"
        <<"2.  Pop Noun (pop a noun off of the Noun Stack)\n"
        <<"3.  Push Verb (push a verb onto the Verb Stack)\n"
        <<"4.  Pop Verb (pop a verb off of the Verb Stack)\n"
        <<"5.  Concatenate\n"
        <<"6.  Add an 's'\n"
        <<"7.  Display both Stacks\n"
        <<"8.  Make a Story\n"
        <<"9.  Exit Choice\n"
        <<"Enter your choice: ";
    cin>>choice;
    while(choice<PUSH_NOUN||choice>QUIT_CHOICE)
    {
        cout<<"Enter a valid choice: ";
        cin>>choice;
        
    }
    
}
void pushItem(DynamicStack<string> &stack)
{
    string item;
    cin.ignore();
    cout<<"\nEnter an item: ";
    getline(cin,item);
    stack.push(item);
    
    
}
void popItem(DynamicStack<string> &stack)
{
   string item = " ";
   stack.pop(item);
   if(item!= " ")
        cout<<item << " was popped\n";
    
}
string validate(string &temp)
{  bool status=false;
   while(status==false)
   {
       status=isNum(temp);
       if(status==false)
       {    
           cout<<"\n please enter a noun without numbers: ";
            cin>>temp;
       }
       
       
   }

    while(temp.size()>10)
    {   
       
                        //cout<<tempNoun.size()<<"\n";
        if(temp.size()>10) //changing while to if
            {
                cout<<"Please enter a noun with a length less than or equal to 10:";
                cin>>temp;
            }
        
        
    }
    cout<<"success\n";
    return temp;
    
}
bool isNum(string str) {
   for (int i = 0; i < str.length(); i++)
      if (isdigit(str[i]) == true)
        {
         return false;
         }//when one non numeric value is found, return false
      return true;
}
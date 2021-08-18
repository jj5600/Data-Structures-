/******************************************************************************
Dynamic Stack
Implementing Dynamic Stack

Using Dynamic Stack Template
*******************************************************************************/
#include <iostream>
#include <string>
#include "DynamicStack.h"

using namespace std;

const int PUSH_CHOICE=1,
            POP_CHOICE=2,
            QUIT_CHOICE=3;
void menu(int &);
void getStackSize(int &);
void pushItem(DynamicStack<string> &);
void popItem(DynamicStack<string> &);

int main()
{
    cout<<"whats up"<<endl;
    int choice;
    DynamicStack<string> stack;
    
    do
    {
        menu(choice);
        if(choice!=QUIT_CHOICE)
        {
            switch(choice)
            {
                case PUSH_CHOICE:
                    pushItem(stack);
                    break;
                case POP_CHOICE:
                    popItem(stack);
                    
                    
                
            }
        }
        
        
    }while(choice!=QUIT_CHOICE);
    cout<<"DONE ---- BYE BYE";
    return 0;
}

void menu(int &choice)
{
    cout<<"Choose 1 for PUSH\n"
        <<"Choose 2 for POP\n"
        <<"Choose 3 for QUIT\n"
        <<"Enter your choice: ";
    cin>>choice;
    while(choice<PUSH_CHOICE||choice>QUIT_CHOICE)
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
/******************************************************************************
Linked List Asst (using container)
Menu Driven program that lays out a menu with options to :
append, insert, delete, search , reverse a Linked List
Created using Ptrs
*******************************************************************************/
#include <iostream>

#include "NumberList.h"
using namespace std;
int main()
{   linkedList <string> mine;
    linkedList <int> list;
    mine.appendNode("blue");
    mine.appendNode("yellow");
    mine.appendNode("green");
    mine.appendNode("red");
    mine.displayList();
    mine.reverseList();
    cout<<".......\n";
    mine.displayList();
    mine.searchList("yellow");
    cout<<"\n";
    list.appendNode(1);
    list.appendNode(2);
    list.appendNode(5);
    
    list.displayList();
    cout<<".......\n";
    list.reverseList();
    list.displayList();
    
    list.appendNode(4);
    list.insertNode(3);
    list.deleteNode(4);
    
    cout<<".......\n";
    list.displayList();
    
    

    return 0;
}

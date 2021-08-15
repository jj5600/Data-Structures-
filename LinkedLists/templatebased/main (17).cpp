#include <iostream>
#include <string>
#include <iomanip>
#include "NumberList.h"

using namespace std;

int main()
{
    LinkedList <int> list;
    
    
    list.appendNode(1);
    list.appendNode(2);
    list.appendNode(3);
    
    
    list.displayList();
    cout<<endl;
    list.appendNode(5);
    cout<<endl;
    list.displayList();
    cout<<endl;
    list.appendNode(4);
    cout<<endl;
    list.displayList();
    cout<<endl;
    list.deleteNode(4);
    cout<<endl;
    list.displayList();
    
    return 0;
    
    
    
    
}

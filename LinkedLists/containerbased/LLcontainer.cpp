/******************************************************************************
Linked List - List Container
*******************************************************************************/
#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> myList;
    
    for(int x=0; x<100; x+=10)
    {
        myList.push_back(x);
    }
    for(auto it =myList.begin(); it!=myList.end();it++)
    {
        cout<<*it<<" ";
        
        
    }
    cout<<endl;
    myList.reverse();
    
    for(auto element: myList)
    {
        
        cout<<element<<" ";
        
    }
    cout<<endl;
    
    return 0;
    
    
    
}

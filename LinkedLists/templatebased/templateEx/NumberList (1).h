#ifndef NUMBERLIST_H
#define NUMBERLIST_H
#include <iostream>
using namespace std;

template <class T>
class linkedList
{
private:
    struct listNode             //Node structure
    {
        T value;                // Value of node
        struct listNode * next; // pointer to next of noe
    };
    
    listNode * head;            // head pointer node 
    
public: 
    
    linkedList(){head=nullptr;};//initialize head to null(constructor)
    ~linkedList();
    void appendNode(T);
    void insertNode(T);
    void deleteNode(T);
    void displayList();
    void reverseList();
    void searchList(T);
    
};


template <class T>
void linkedList<T>::appendNode(T newVal)
{
    listNode * nodePtr;
    listNode * newNode;
    
    newNode= new listNode; // creates a new node
    newNode->value=newVal; // assigns it its value
    newNode->next=nullptr; // since its appended its next val is null
    
    if(!head)
    {
        head=newNode; // adds new node into empty list
    }
    else 
    {
        nodePtr=head; // start node ptr at head of list
        
        while(nodePtr->next) // while next is not null 
        {
            nodePtr=nodePtr->next; // find next node
        } // terminates once null is found ( end of list)
        
        nodePtr->next=newNode; // tacks new node onto end of list
         
    }
    
}
template<class T>

void linkedList<T>::insertNode(T num)
{
    listNode * newNode;
    listNode * previousNode=nullptr;
    listNode * nodePtr;
    
    newNode=new listNode;
    newNode->value=num;
    
    if(!head) //if empty add to head
    {
       head=newNode;
       newNode->next=nullptr;
        
    }
    else
    {
        
        nodePtr=head;
        previousNode=nullptr;
        //skip all nodes whose val is less than num 
        while(nodePtr!=nullptr && nodePtr->value < num )
        {
            previousNode=nodePtr;
            nodePtr=nodePtr->next;
        }
        //if it goes first in list, then do this
        if(previousNode==nullptr)
        {
            
            head=newNode;
            newNode->next = nodePtr;
        }
        else // else follow this procedure.
        {
            
            previousNode->next=newNode;
            newNode->next=nodePtr;
        }
    }
}
template<class T>
void linkedList<T>::deleteNode(T num)
{
    listNode * nodePtr;
   listNode * previousNode;
   
   if(!head) // if empty 
   
     return;  
   if(head->value==num) //if first in the list
   {
      nodePtr=head->next;
      delete head;
      head = nodePtr;
       
   }
   else
   {
      nodePtr= head;
      while(nodePtr!=nullptr && nodePtr->value !=num) //pass vals not equal to num
       {
           
            previousNode=nodePtr;
            nodePtr = nodePtr->next;
            
       }
       if(nodePtr)
       {
          previousNode->next=nodePtr->next;
          delete nodePtr;
          
           
       }
   }
}
template<class T>
void linkedList<T>::displayList()
{
    listNode * nodePtr;
    nodePtr = head;
    while(nodePtr)
    {
        cout<< nodePtr->value<<endl;
        nodePtr=nodePtr->next;
        
    }
    
}    
    
template <class T>
linkedList<T>::~linkedList()
{
  listNode *nodePtr;
  listNode *nextNode;
  
  nodePtr=head;
  
  while(nodePtr != nullptr)
    {
      nextNode = nodePtr->next;
      delete nodePtr;
      nodePtr=nextNode;
      
      
      
    }
    
}


template<class T>
void linkedList<T>::reverseList()
 {  
    listNode * nodePtr=head;
    listNode * nextNode=nullptr;
    listNode * previousNode=nullptr;
     
  
        while (nodePtr != nullptr) 
        { 
           
            nextNode = nodePtr->next; // move next ptr up one
            nodePtr->next = previousNode; //point current node to prev
            previousNode = nodePtr; //move previous node up one
            nodePtr = nextNode;  // move curren pointer up one
        }
        head=previousNode;// set previous to head
}
template <class T>
void linkedList<T>::searchList(T num)
{   int count=0;
    int othercount=0;
    listNode * nodePtr; 
    nodePtr = head;
    cout<<"Location(s) are: ";
    while (nodePtr)
    {  
        if(nodePtr->value==num)
        { cout<<count<<" ";
         othercount++;
        }

        count++;
        nodePtr = nodePtr->next; 
        if(othercount==0)
        {
        cout<<" None ";
        }
    
    }
    
}  
#endif
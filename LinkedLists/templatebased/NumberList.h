#ifndef NUMBERLIST_H
#define NUMBERLIST_H
#include <iostream>
using namespace std;
//class template for holding the LinkedList
template<class T>
class LinkedList
{   private:
    struct ListNode
    {
        T value;
        struct ListNode * next;
    
    };
    
    ListNode * head;
    public:
    LinkedList(){head=nullptr;};
    ~LinkedList();
    
    void appendNode(T);
    void insertNode(T);
    void deleteNode(T);
    void displayList() const;
    
    
};
//**************************************
// appendNode function , takes
// given value and adds it to the end 
// of the list
//**************************************

template <class T>
void LinkedList<T>::appendNode(T newValue)
{
    ListNode * newNode; // this points to a new node 
    ListNode * nodePtr; // for iterating through List 
    
    newNode = new ListNode;
    newNode->value=newValue;
    newNode->next=nullptr;
    
    if(!head)
        head=newNode;
    else
    {
        nodePtr = head;
        while(nodePtr->next)
        
           nodePtr = nodePtr->next;
          
            
        nodePtr->next=newNode;
        
    }
}
//**************************************
// displayList function , takes
// given value and adds it to the end 
// of the list
//**************************************
template<class T>

void LinkedList<T>::displayList() const
{
    ListNode * nodePtr;
    nodePtr = head;
    while(nodePtr)
    {
        cout<< nodePtr->value<<endl;
        nodePtr=nodePtr->next;
        
    }
    
}
//**************************************
// insertNode function , takes
// given value and adds it to the end 
// of the list
//**************************************    
template<class T>

void LinkedList<T>::insertNode(T num)
{
    ListNode * newNode;
    ListNode * nodePtr;
    ListNode * previousNode=nullptr;
    
    newNode= new ListNode;
    newNode->value=num;
    if(!head)
    {
        head=newNode;
        newNode->next=nullptr;

    }
    else
    {   nodePtr=head;
        previousNode=nullptr;
        
        
        while(nodePtr!=nullptr && nodePtr->value < num)
        {
            previousNode = nodePtr;
            nodePtr = nodePtr->next;
            
        }
        if(previousNode==nullptr)
        {
            head=newNode;
            newNode->next=nodePtr;
        }
        else
        {
            previousNode->next = newNode;
            newNode->next=nodePtr;
            
        }
        
    }
    
}
//**************************************
// deletNode function , takes
// given value and deletes it 
// of the list
//**************************************
template<class T>
void LinkedList<T>::deleteNode(T num)
{
   ListNode * nodePtr;
   ListNode * previousNode;
   
   if(!head)
   
     return;  
   if(head->value==num)
   {
      nodePtr=head->next;
      delete head;
      head = nodePtr;
       
   }
   else
   {
      nodePtr= head;
      while(nodePtr!=nullptr && nodePtr->value !=num)
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
template <class T>
LinkedList<T>::~LinkedList()
{
  ListNode *nodePtr;
  ListNode *nextNode;
  
  nodePtr=head;
  
  while(nodePtr != nullptr)
  {
      nextNode = nodePtr->next;
      delete nodePtr;
      nodePtr=nextNode;
      
      
      
  }
    
}
    
#endif
    

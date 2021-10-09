#include<iostream>
#include "IntBinaryTree.h"
using namespace std;

// insert accepts a TreeNode Pointer and a pointer to a node *
// The Function inserts the node into the tree pointed to IntBinaryTree
// the TreeNode pointer. This function is called recusively 

void IntBinaryTree::insert(TreeNode *&nodePtr, TreeNode *&newNode)
{
if(nodePtr==nullptr)
	nodePtr=newNode; //if its null , insert the node
else if (newNode->value < nodePtr->value) //search left
	insert(nodePtr->left,newNode);
else 
	insert(nodePtr->right,newNode); //search right
}

//insertNode creates a new node to hold num as its value ,
//and passes it to the insert function 

void IntBinaryTree::insertNode(int num)
{
	TreeNode * newNode=nullptr;

	newNode = new TreeNode;
	newNode->value=num;
	newNode->left=newNode->right=nullptr;

	insert(root,newNode);


}
//destroySubTree is called by the destructor. it
// deletes all nodes in the tree
void IntBinaryTree::destroySubTree(TreeNode * nodePtr)
{
	if(nodePtr)
	{
			if(nodePtr->left)
					destroySubTree(nodePtr->left);
			if(nodePtr->right)
					destroySubTree(nodePtr->right);
			delete nodePtr;

	}
}
//searchnode determines whether a value is present in 
//the tree .if so the function returns true.
//otherwise it resturns false

bool IntBinaryTree::searchNode(int num )
{
	TreeNode * nodePtr=root;
	while(nodePtr)
	{
		if(nodePtr->value==num)
			return true;
		else if (num< nodePtr->value)
			nodePtr=nodePtr->left;
		else 
			nodePtr=nodePtr->right;
	
	}
	return false;
}

// remove calls delete node to delete then node 
//whose value is the same as num
void IntBinaryTree::remove(int num)
{

	deleteNode(num,root);
	

}

void IntBinaryTree::deleteNode(int num, TreeNode *& nodePtr)
{

		if(num<nodePtr->value)
				deleteNode(num,nodePtr->left);
		else if (num> nodePtr->value)
				deleteNode(num,nodePtr->right);
		else
			makeDeletion(nodePtr);
}

// make deletion takes a reference to a pointer to the node
// that is to be deleted. The node is removed and the 
// branches of the tree below the node are reattached

void IntBinaryTree::makeDeletion(TreeNode *&nodePtr)
{
	TreeNode * tempNodePtr = nullptr;
	if(nodePtr == nullptr)
		cout<<"Cannot delete empty node\n";
	else if(nodePtr->right==nullptr)
	{
		tempNodePtr=nodePtr;
		nodePtr=nodePtr->left; //reattach the left child
		delete tempNodePtr;
	}
	else if(nodePtr->left==nullptr)
	{
		tempNodePtr=nodePtr;
		nodePtr=nodePtr->right; //reattach the right child
		delete tempNodePtr;
	}
	else 
	{
		//move one node to the right
		tempNodePtr=nodePtr->right;
		while(tempNodePtr->left)
				tempNodePtr=tempNodePtr->left;
		tempNodePtr->left=nodePtr->left;
		tempNodePtr=nodePtr;
		nodePtr=nodePtr->right;
		delete tempNodePtr;

	}

}
//the displayinorder memeber function displays the values
// in the subtree pointed to by nodePtr, via inorder traversal

void IntBinaryTree::displayInOrder(TreeNode * nodePtr) const
{

	if(nodePtr)
	{
		displayInOrder(nodePtr->left);
		cout<<nodePtr->value<<endl;
		displayInOrder(nodePtr->right);


	}

}
//The displayPreOrder member function displays the values
// in the subtree pointed pointed to by nodePtr, via preorder traversal

void IntBinaryTree::displayPreOrder(TreeNode * nodePtr) const
{
		if(nodePtr)
		{
				cout<<nodePtr->value<<endl;
				displayPreOrder(nodePtr->left);
				displayPreOrder(nodePtr->right);
		}

}

// the display post order member function dispalys the values 
// in the subtree pointed to by nodePtr, via postorder traversal

void IntBinaryTree::displayPostOrder(TreeNode * nodePtr) const
{
		if(nodePtr)
		{
			displayPostOrder(nodePtr->left);
			displayPostOrder(nodePtr->right);
			cout<<nodePtr->value<<endl;

		}


}
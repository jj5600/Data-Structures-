#include<iostream>
#include "IntBinaryTree.h"
using namespace std;
int main ()
{
	IntBinaryTree tree;

	cout<<"Inserting node.\n";
	tree.insertNode(5);
	tree.insertNode(8);
	tree.insertNode(3);
	tree.insertNode(12);
	tree.insertNode(9);
	
	cout<<"Here are the values in the tree: \n";
	tree.displayInOrder();
	cout<<"delete 8\n";
	tree.remove(8);
	cout<<"deleting 12...\n";
	tree.remove(12);
	cout<<"now here are the nodes: \n";
	tree.displayInOrder();
	return 0;

}
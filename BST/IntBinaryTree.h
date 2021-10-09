#ifndef INTBINARYTREE_H
#define INTBINARYTREE_H


class IntBinaryTree 
{
private:
	struct TreeNode 
	{
		int value;				// value of node
		TreeNode * left;  // left pointer
		TreeNode * right; //right pointer
	};

	TreeNode * root; 		//root of Tree

	void insert(TreeNode *&, TreeNode *&); // values passed by ref to keep chages
	void destroySubTree(TreeNode *);
	void deleteNode(int, TreeNode *&);
	void makeDeletion(TreeNode *&);
	void displayInOrder(TreeNode *) const;
	void displayPreOrder(TreeNode *) const;
	void displayPostOrder(TreeNode *) const;


public:
	//constructor
	IntBinaryTree()
		{root=nullptr;} 
	//destructor
	~IntBinaryTree()
	{destroySubTree(root);}

	void insertNode(int);
	bool searchNode(int);
	void remove(int);

	void displayInOrder() const
		{displayInOrder(root);} 
	void displayPreOrder() const
		{displayPreOrder(root);}
	void displayPostOrder() const
		{displayPostOrder(root);}


};
#endif




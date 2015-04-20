#include <iostream>

struct node
{
	// Data stored in this node of the treee
	int cent;
	// The left branch of the tree
	node *left;
	// The right branch of the tree
	node *right;
};

class binary_tree
{
	
		void delete_tree(node *tree);
		void insert(node **tree, int);
		bool search(node *tree, int cent);
		void inorder(node *tree);
		void preorder(node *tree);
		void postorder(node * tree);
};
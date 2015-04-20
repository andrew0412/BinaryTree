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
	public:

		void delete_tree(tree->root);
		void insert(tree->root, int);
		bool search(tree->root, int cent);
		void inorder(tree->root);
		void preorder(tree->root);
		void postorder(tree->root);
	private:
		node root;
};
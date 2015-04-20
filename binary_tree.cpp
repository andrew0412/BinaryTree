#include <iostream>
#include "binary_tree.h"

using namespace std;

// Inserts a value into the tree - notice **
void binary_tree::insert(node **tree, int value)
{
	// Check if nullptr. If so set new node
	if (*tree == nullptr)
	{
		// Create new node
		*tree = new node;
		// Set new value
		(*tree)->cent = value;
		// Set branches to nullptr
		(*tree)->left = nullptr;
		(*tree)->right = nullptr;
	}
	else
	{
		if (value< (*tree)->cent)
		{
			insert(&(*tree)->left, value);
		}
		else if (value> (*tree)->cent)
		{
			insert(&(*tree)->right, value);
		}
		else
		{
			return;
		}
	}

}

// Searches
bool binary_tree::search(node *tree, int cent)
{
	if (tree == NULL)
	{
		return false;
	}
	else if (cent == tree->cent)
	{
			return true;
	}
	else if (cent < tree->cent)
	{
		return search(tree->left, cent);
	}
	else
	{
		return search (tree->right, cent);
	}
}

// Deletes the tree - freeing memory
void binary_tree::delete_tree(node *tree)
{
	if (tree == nullptr)
	{
		return;
	}
	delete_tree(tree->left);
	delete_tree(tree->right);
	delete tree;
}

// Prints the tree in order
void binary_tree::inorder(node *tree)
{
	if (tree != nullptr)
	{
		inorder( tree->left );    
        cout << tree->cent << endl;     
        inorder(tree->right ); 
	}
}

void binary_tree::preorder(node *tree)
{
	if (tree != nullptr)
	{
		cout << tree->cent << endl;
		preorder(tree->left);
		preorder(tree->right);
	}
}

void binary_tree::postorder(node * tree)
{
	if (tree != nullptr)
	{
		postorder(tree->left);
		postorder(tree->right);
		cout << tree->cent << endl;
	}
}
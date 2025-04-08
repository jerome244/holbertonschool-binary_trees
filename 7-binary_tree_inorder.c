#include "binary_trees.h"

/**
 * binary_tree_inorder - print branches of a binary tree in order
 * @tree: pointer to the root node of the tree to navigate
 * @func: pointer to a function to print the number of the branch
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
	{
		return;
	}

	binary_tree_inorder(tree->left, func);
	(*func)(tree->n);
	binary_tree_inorder(tree->right, func);
}

#include "binary_trees.h"

/**
 * binary_tree_preorder - iterates a tree in pre-order traversal.
 * @tree: pointer to the root node of the tree to navigate.
 * @func: pointer to a function to print the number of the branch.
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	(*func)(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}

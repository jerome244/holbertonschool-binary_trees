#include "binary_trees.h"

/**
 * binary_tree_postorder - Iterates a tree in post-order traversal.
 * @tree: The pointer to the root node of the tree to traverse.
 * @func: The pointer to a function to call for each node.
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	(*func)(tree->n);
}

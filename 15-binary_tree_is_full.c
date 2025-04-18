#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: The pointer to the root node of the tree to measure the size.
 * Return: 1 is the tree is full, 0 if not.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int l, r;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	if (tree->left != NULL && tree->right != NULL)
	{
		if (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right))
			return (1);
	}
	return (0);
}

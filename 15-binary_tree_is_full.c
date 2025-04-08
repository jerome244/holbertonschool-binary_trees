#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: The pointer to the root node of the tree to measure the size.
 * Return: The number of nodes of a binary tree.
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
	if (tree->left == NULL && tree->right != NULL)
	{
		return (0);
	}
	if (tree->left != NULL && tree->right == NULL)
	{
		return (0);
	}
	l = binary_tree_is_full(tree->left);
	r = binary_tree_is_full(tree->right);
	if (l == 0 || r == 0)
	{
		return (0);
	}
	else if (l == r)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

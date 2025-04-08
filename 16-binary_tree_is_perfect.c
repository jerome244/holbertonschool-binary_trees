#include "binary_trees.h"
#include "15-binary_tree_is_full.c"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: The pointer to the root node of the tree to measure the size.
 * Return: 1 if tree is perfect, 0 if not
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
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

#include "binary_trees.h"
#include "9-binary_tree_height.c"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: The pointer to the root node of the tree to measure the size.
 * Return: 1 if tree is perfect, 0 if not
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
	{
		return (0);
	}

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (left != right)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	else
	{
		if (binary_tree_is_perfect(tree->left)
		&& binary_tree_is_perfect(tree->right))
		{
			return (1);
		}
	}
	return (0);
}

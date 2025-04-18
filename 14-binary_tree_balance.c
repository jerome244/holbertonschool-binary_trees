#include "binary_trees.h"
#include "9-binary_tree_height.c"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: tree to operate on
 * Return: Balance factor of tree
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int balanceLeft = 0, balanceRight = 0;

	if (tree != NULL)
	{
		balanceLeft = binary_tree_height(tree->left);
		balanceRight = binary_tree_height(tree->right);

		if (tree->left == NULL)
		{
			balanceLeft = -1;
		}
		if (tree->right == NULL)
		{
			balanceRight = -1;
		}
	}

	return (balanceLeft - balanceRight);
}

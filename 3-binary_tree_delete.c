#include "binary_trees.h"

/**
 * binary_tree_delete - deletes an entire binary tree
 * Return: binary tree node
 * @tree: tree to delete
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		free(tree);
		return;
	}
}

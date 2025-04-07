#include "binary_trees.h"

/**
 * *binary_tree_insert_left -  inserts a node as the left-child of another node
 * Return: binary tree node
 * @parent: parent of new node
 * @value: value of new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
	{
		return (NULL);
	}

	new = binary_tree_node(parent, value);

	if (new->left == NULL)
	{
		new->left = new;
		new->left->parent = new;
		free(new);
	}

	parent->left = new;

	return (new);
}

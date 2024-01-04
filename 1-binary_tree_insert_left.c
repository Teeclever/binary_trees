#include "binary_trees.h"

/**
 * binary_tree_insert_left - a function that Insert a node as the left-child of another node.
 * @parent: pointer to the node
 * @value: value to store in the new node
 *
 * Return: a pointer to the created node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left;

	if (parent == NULL)
	{
		return (NULL);
	}

	left = malloc(sizeof(binary_tree_t));

	if (left == NULL)
	{
		return (NULL);
	}

	left->parent = parent;
	left->n = value;
	left->left = parent->left;
	left->right = NULL;

	if (parent->left != NULL)
	{
		left->left = parent->left;
		parent->left->parent = left;
	}

	parent->left = left;

	return (left);
}

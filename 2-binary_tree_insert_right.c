#include "binary_trees.h"

/**
 * binary_tree_insert_right - a function that Insert a node as the right-child of another node.
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 *
 * Return: a pointer to the created node, or NULL if it fails
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right;

	if (parent == NULL)
	{
		return (NULL);
	}

	right = malloc(sizeof(binary_tree_t));

	if (right == NULL)
		return (NULL);

	right->parent = parent;
	right->n = value;
	right->left = NULL;
	right->right = parent->right;

	if (parent->right != NULL)
	{
		right->right = parent->right;
		parent->right->parent = right;
	}

	parent->right = right;

	return (right);
}

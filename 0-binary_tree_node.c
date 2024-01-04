#include "binary_trees.h"

/**
 * binary_tree_node - A function that Creates a binary tree node
 * @parent: A pointer to the parent node
 * @value: the Value to put in the new node
 *
 * Return: returns Pointer to the new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (node == NULL)
	{
		return (NULL);
	}

	node->parent = parent;
	node->n = value;
	node->left = NULL;
	node->right = NULL;

	return (node);
}

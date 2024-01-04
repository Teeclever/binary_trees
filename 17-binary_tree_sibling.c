#include "binary_trees.h"

/**
 * binary_tree_sibling - A funnction thats Finds the sibling of a node
 * @node: Pointer to the node to find the sibling
 *
 * Return: A Pointer to the sibling node, or NULL if no sibling
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL ||
		node->parent->left == NULL || node->parent->right == NULL)
	{
		return (NULL);
	}

	if (node->parent->left->n == node->n)
	{
		return (node->parent->right);

	}
	else if (node->parent->right->n == node->n)
	{
		return (node->parent->left);

	}

	return (NULL);
}

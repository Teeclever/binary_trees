#include "binary_trees.h"

/**
 * binary_tree_size - A function that measures the value of a binary tree
 * @tree: A pointer to the root node of the tree to measure the value
 *
 * Return: the Size of the tree, 0 if tree is NULL.
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t value;

	if (tree == NULL)
		return (0);

	value = binary_tree_size(tree->left) + 1;
	value += binary_tree_size(tree->right);

	return (value);
}

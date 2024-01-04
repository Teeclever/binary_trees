#include "binary_trees.h"

/**
 * binary_tree_leaves -A function that Counts the leaves in a binary tree
 * @tree: A Pointer to the root node of the tree
 *
 * Return: its Number of leaves in the tree, 0 if tree is NULL
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left = binary_tree_leaves(tree->left);
	right = binary_tree_leaves(tree->right);

	return (left + right);
}

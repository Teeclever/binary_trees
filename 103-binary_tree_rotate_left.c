#include "binary_trees.h"

/**
 * binary_tree_rotate_left - function that Performs a rotation on a binary tree
 * @tree: A Pointer to the root node of the tree to rotate
 *
 * Return: A Pointer to the new root node of the tree once rotated
 */

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *value, *root;

	value = NULL;
	if (tree == NULL)
		return (NULL);
	if (tree->right == NULL)
		return (tree);
	if (tree->right->left != NULL)
		value = tree->right->left;

	root = tree->right;
	tree->right->left = tree;
	tree->parent = tree->right;
	tree->right->parent = NULL;
	tree->right = value;

	if (value != NULL)
		value->parent = tree;
	return (root);
}

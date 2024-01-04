#include "binary_trees.h"

/**
 * binary_tree_rotate_right - A function that Performs right on a binary tree
 * @tree: A Pointer to the root node of the tree to rotate
 *
 * Return: A Pointer to the new root node of the tree once rotated
 */

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *value, *rightt;

	value = NULL;
	if (tree == NULL)
		return (NULL);
	if (tree->left == NULL)
		return (tree);
	if (tree->left->right != NULL)
		value = tree->left->right;

	rightt = tree->left;
	tree->left->right = tree;
	tree->parent = tree->left;
	tree->left->parent = NULL;
	tree->left = value;

	if (value != NULL)
		value->parent = tree;
	return (rightt);
}

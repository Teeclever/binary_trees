#include "binary_trees.h"

/**
 * binary_tree_balance_height - func  that Measures the height of a binary tree
 * @tree: A Pointer to the root node of the tree
 *
 * Return: the Height of the tree, 0 if tree is NULL
 */

size_t binary_tree_balance_height(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (-1);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	left = binary_tree_balance_height(tree->left) + 1;
	right = binary_tree_balance_height(tree->right) + 1;

	if (left > right)
		return (left);
	else
		return (right);
}

/**
 * binary_tree_balance - function Measures the balance factor of a binary tree
 * @tree: A Pointer to the root node of the tree
 *
 * Return: its Balance factor of the tree, 0 if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);

	left = binary_tree_balance_height(tree->left);
	right = binary_tree_balance_height(tree->right);

	return (left - right);
}

#include "binary_trees.h"

/**
 * binary_tree_levelorder -func go through binary 3 using level-order traversal
 * @tree: A pointer to root of tree
 * @func: A function pointer to use while traversing
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int value, height;

	if (tree == NULL || func == NULL)
		return;

	height = binary_tree_balance_height(tree);
	for (value = 0;  value <= height;  value++)
		levelordering(tree, func,  value);
}

/**
 * levelordering - A func binary tree level ordering recursive helper function
 * @tree: A node of a tree, initially the root
 * @func: A function pointer to use at each level
 * @height: the height of tree
 */

void levelordering(const binary_tree_t *tree, void (*func)(int), int height)
{
	if (tree == NULL)
		return;
	else if (height == 0)
		func(tree->n);
	else
	{
		levelordering(tree->left, func, height - 1);
		levelordering(tree->right, func, height - 1);
	}
}

/**
 * binary_tree_balance_height -A function Measures the height of a binary tree
 * @tree: a Pointer to the root node of the tree
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

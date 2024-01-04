#include "binary_trees.h"
#include "14-binary_tree_balance.c"

/**
 * binary_tree_is_perfect - A function that Checks if a binary tree is perfect
 * @tree: A Pointer to the root node of the tree
 *
 * Return: 1 if the tree is perfect, 0 otherwise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int checks = 0;

	if (tree)
	{
		checks = 1;
		if (binary_tree_balance(tree) != 0)
			return (0);
		if (tree->left)
			checks *= binary_tree_is_perfect(tree->left);
		if (tree->right)
			checks *= binary_tree_is_perfect(tree->right);
	}
	return (checks);
}

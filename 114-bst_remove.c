#include "binary_trees.h"

/**
 * bst_remove - A function that Removes a node from a Binary Search Tree
 * @root: A Pointer to the root node of the tree
 * @value: A Value to remove from the tree
 *
 * Return: Pointer to the new root node of the tree
 */

bst_t *bst_remove(bst_t *root, int value)
{
	bst_t *val = NULL;

	if (!root)
		return (NULL);

	if (value < root->n)
		root->left = bst_remove(root->left, value);
	else if (value > root->n)
		root->right = bst_remove(root->right, value);
	else
	{
		if (!root->left)
		{
			val = root->right;
			free(root);
			return (val);
		}
		else if (!root->right)
		{
			val = root->left;
			free(root);
			return (val);
		}
		val = bst_min(root->right);
		root->n = val->n;
		root->right = bst_remove(root->right, val->n);
	}
	return (root);
}

/**
 * bst_find_min - A function Finds the minimum value node
 * @root: A Pointer to the root node of the BST
 *
 * Return: A Pointer to the node with the minimum value
 */

bst_t *bst_min(bst_t *root)
{
	bst_t *hold = root;

	while (hold->left)
		hold = hold->left;

	return (hold);
}

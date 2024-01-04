#include "binary_trees.h"

/**
 * binary_tree_postorder - A fnc dat Goes throu binary 3 uin pst-orda traversal
 * @tree: A Pointer to the root node of the tree to traverse
 * @func: A Pointer to a function to call for each node
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}

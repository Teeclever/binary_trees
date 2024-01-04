#include "binary_trees.h"
#include "10-binary_tree_depth.c"

/**
 * binary_trees_ancestor - A function Finds the lowest common ancestor of two nodes
 * @first: A Pointer to the first node
 * @second: A Pointer to the second node
 *
 * Return: A Pointer to the lowest common ancestor node, or NULL if not found
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
										const binary_tree_t *second)
{
	int value;

	if (first && second)
	{
		value = binary_tree_depth(first) - binary_tree_depth(second);
		if (value < 0)
		{
			value *= -1;
			while (value--)
				second = second->parent;
		}
		else
		{
			while (value--)
				first = first->parent;
		}
		while (first)
		{
			if (first == second)
				return ((binary_tree_t *) first);
			first = first->parent;
			second = second->parent;
		}
	}
	return (NULL);
}

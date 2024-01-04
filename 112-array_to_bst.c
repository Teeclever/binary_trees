#include "binary_trees.h"

/**
 * array_to_bst - A function that Builds a Binary Search Tree from an array
 * @array: A Pointer to the first element of the array to be converted
 * @size: the Number of elements in the array
 *
 * Return: its return Pointer to the value node
 */

bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *value = NULL;
	size_t i;

	if (array == NULL || size == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		if (bst_insert(&value, array[i]) == NULL)
		{
			return (NULL);
		}
	}

	return (value);
}

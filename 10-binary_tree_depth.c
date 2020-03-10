#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures the height of a binary tree
 * @tree:  pointer to the root node of the tree to measure the height
 * Return: Pointer to the new created node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t idx = 0;

	if (tree == NULL)
	{
		return (0);
	}
	while (tree->parent)
	{
		idx++;
		tree = tree->parent;
	}
	return (idx);
}

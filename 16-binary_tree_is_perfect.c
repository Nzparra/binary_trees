#include "binary_trees.h"
/**
 * bth - function that measures the height of a binary tree
 * @tree:  pointer to the root node of the tree to measure the height
 * Return: Pointer to the new created node
 */
size_t bth(const binary_tree_t *tree)
{
	size_t t_one, t_two;

	if (tree == NULL)
	{
		return (0);
	}
	t_one = bth(tree->left);
	t_two = bth(tree->right);
	return (MX(t_one, t_two) + 1);
}
/**
 * size - function that measures the size of a binary tree
 * @tree:  pointer to the root node of the tree to measure the height
 * Return: Number of nodes
 */
size_t size(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	return (size(tree->right) + size(tree->left) + 1);
}
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree:  pointer to the root node of the tree to check
 * Return: 1 perfect 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int c, d;

	if (tree == NULL)
	{
		return (0);
	}
	d = bth(tree) - 1;
	c = size(tree);
	if (c == (2 << d) - 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

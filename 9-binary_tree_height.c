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
 * binary_tree_height - function that measures the height of a binary tree
 * @tree:  pointer to the root node of the tree to measure the height
 * Return: Pointer to the new created node
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	return (bth(tree) - 1);
}

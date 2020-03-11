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
 * binary_tree_balance -  measures the balance factor of a binary tree
 * @tree:  pointer to the root node of the tree to measure the height
 * Return: Balance Factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int c, d;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left)
	{
		c = bth(tree->left) - 1;
	}
	else
	{
		c = -1;
	}
	if (tree->right)
	{
		d = bth(tree->right) - 1;
	}
	else
	{
		d = -1;
	}
	return (c - d);
}

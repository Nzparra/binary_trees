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
 * level_print - print a level of a tree
 * @tree:  pointer to the root of the tree
 * @func: function
 * @level: level of the tree
 */
void level_print(const binary_tree_t *tree, void (*func)(int), size_t level)
{
	if (!level)
	{
		func(tree->n);
	}
	else
	{
		level_print(tree->left, func, level - 1);
		level_print(tree->right, func, level - 1);
	}
}
/**
 * binary_tree_levelorder - goes through a binary tree level-order traversal
 * @tree:  pointer to the root of the tree
 * @func: function
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t h, c;

	if (tree == NULL || func == NULL)
	{
		return;
	}
	h = bth(tree) - 1;
	for (c = 0; c <= h; c++)
	{
		level_print(tree, func, c);
	}
}

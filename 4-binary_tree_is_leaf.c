# include "binary_trees.h"

/**
 * binary_tree_is_leaf - Function Check Leaf node.
 * @node: Node Check is leaf
 * Return: Int 1 True or 0 False
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node->left || node->right)
	{
		return (0);
	}
	return (1);
}

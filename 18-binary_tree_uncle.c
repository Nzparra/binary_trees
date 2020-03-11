#include "binary_trees.h"

/**
 * binary_tree_uncle - Function Found Uncle.
 * @node:  pointer to Uncle.
 * Return: Node Binary.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL
		|| node->parent->parent == NULL)
	{
		return (NULL);
	}
	if (node->parent == node->parent->parent->right)
	{
		return (node->parent->parent->left);
	}
	else
	{
		return (node->parent->parent->right);
	}
}

#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: A pointer to the parent node
 * @value: Value to Add
 * Return: Pointer to the new created node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *tree = NULL;

	if (parent == NULL)
	{
		return (NULL);
	}
	tree = calloc(1, sizeof(binary_tree_t));
	if (tree == NULL)
	{
		return (NULL);
	}
	tree->parent = parent;
	tree->n = value;
	if (parent->left)
	{
		tree->left = parent->left;
		tree->left->parent = tree;
	}
	parent->left = tree;
	return (tree);
}

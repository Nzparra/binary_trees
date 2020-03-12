#include "binary_trees.h"
/**
 * tree_long - long of a node in a tree.
 * @tree:  The tree.
 * Return: long of tree.
 */
size_t tree_long(const binary_tree_t *tree)
{
	size_t l;

	if (tree == NULL)
	{
		return (0);
	}
	l = 0;
	while (tree->parent)
	{
		tree = tree->parent;
		l++;
	}
	return (l);
}
/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: pointer to the first node.
 * @second: pointer to the second node.
 * Return: Pointer to the lowest common ancestor.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *f = (binary_tree_t *)first;
	binary_tree_t *s = (binary_tree_t *)second;
	size_t a, b;

	if (first == NULL || second == NULL)
	{
		return (NULL);
	}
	a = tree_long(f);
	b = tree_long(s);
	for (; b > a; b--)
	{
		s = s->parent;
	}
	for (; b < a; b--)
	{
		f = f->parent;
	}
	while (f && s)
	{
		if (f == s)
		{
			return (s);
		}
		f = f->parent;
		s = s->parent;
	}
	return (NULL);
}

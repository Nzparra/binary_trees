#include "binary_trees.h"
/**
 * avl - Builds an AVL tree from an array
 * @array: pointer to the first element of the array to be converted
 * @s: Start the array
 * @e: end array
 * @parent: Pointee
 * Return: n node
 */
avl_t *avl(int *array, int s, int e, avl_t *parent)
{
	avl_t *n;
	int med;

	if (s > e)
	{
		return (NULL);
	}
	med = (s + e) / 2;
	n = calloc(1, sizeof(avl_t));
	if (n == NULL)
	{
		return (NULL);
	}
	n->parent = parent;
	n->n = array[med];
	n->right = avl(array, med + 1, e, n);
	n->left = avl(array, s, med - 1, n);
	return (n);
}
/**
 * sorted_array_to_avl - Builds an AVL tree from an array
 * @array: pointer to the first element of the array to be converted
 * @size: the number of element in the array
 * Return: Root pointer to new AVL tree
 */
avl_t *sorted_array_to_avl(int *array, size_t size)
{
	if (array == NULL)
	{
		return (NULL);
	}
	return (avl(array, 0, size - 1, NULL));
}

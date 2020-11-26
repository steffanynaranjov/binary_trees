#include "binary_trees.h"
/**
 * binary_tree_size - Function that measures the size of a binary tree
 * @tree: Binary tree
 *
 * Description: Function that that measures the size of a binary tree
 * Return: Nothing void
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t s = 0;

	if (!tree)
		return (0);
	s += binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1;
	return (s);
}

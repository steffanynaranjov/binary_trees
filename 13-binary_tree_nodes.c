#include "binary_trees.h"
/**
 * binary_tree_nodes - Function that  counts the nodes
 * @tree: Binary tree
 *
 * Description: Function that that  counts the nodes
 * with at least 1 child in a binary tree
 * Return: Nothing void
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int x, y;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (0);
	x = binary_tree_nodes(tree->left);
	y = binary_tree_nodes(tree->right);
	return (1 + x + y);
}

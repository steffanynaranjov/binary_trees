#include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: Binary tree
 * Description: measures the depth of a node in a binary tree
 * Return: Nothing
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);
	depth = tree->parent ? binary_tree_depth(tree->parent) + 1 : 0;
	return (depth);
}

#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: Binary tree
 * Description: counts the leaves in a binary tree
 * Return: Nothing
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t s = 0;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	s = binary_tree_leaves(tree->right) + binary_tree_leaves(tree->left);
	return (s);

}

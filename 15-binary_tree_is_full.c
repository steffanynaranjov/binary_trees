#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: Binary tree
 * Description: checks if a binary tree is full
 * Return: Nothing
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int x, y;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	x = binary_tree_is_full(tree->left);
	y = binary_tree_is_full(tree->right);
	return (x && y);
}

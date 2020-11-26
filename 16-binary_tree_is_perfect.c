#include "binary_trees.h"
#include "14-binary_tree_balance.c"
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: Binary tree
 * Description: checks if a binary tree is perfect
 * Return: 1 or 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int n_left, n_right;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if (binary_tree_balance(tree) != 0)
		return (0);
	if (tree->left && tree->right)
	{
		n_left = binary_tree_is_perfect(tree->left);
		n_right = binary_tree_is_perfect(tree->right);
		return (n_left && n_right);
	}
	return (0);
}

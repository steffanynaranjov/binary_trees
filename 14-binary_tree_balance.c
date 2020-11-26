#include "binary_trees.h"
#include "9-binary_tree_height.c"
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: tree to measure
 * Description: measures the balance factor of a binary tree
 * Return: positive, negative or 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int n_left, n_right;

	if (!tree)
		return (0);
	n_left = tree->left ? binary_tree_height(tree->left) + 1 : 0;
	n_right = tree->right ? binary_tree_height(tree->right) + 1 : 0;
	return (n_left - n_right);
}

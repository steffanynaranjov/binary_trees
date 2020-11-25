#include "binary_trees.h"
/**
 * binary_tree_preorder - goes in pre-order traversal
 * @tree: Binary tree
 * @func: print function
 * Description: goes through a binary tree using pre-order traversal
 * Return: Nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}

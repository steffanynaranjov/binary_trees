#include "binary_trees.h"
/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: binary tree
 * Description: Function that deletes an entire binary tree
 * Return: Nothing void
 */
void binary_tree_delete(binary_tree_t *tree)
{

	if (!tree)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
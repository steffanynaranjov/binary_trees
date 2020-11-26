#include "binary_trees.h"
/**
 * binary_tree_height -  finds the sibling of a node
 * @tree: Binary tree
 * Description:  finds the sibling of a node
 * Return: sibling node or null
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node)
		return (NULL);
	if (node->parent && node->parent->left != node)
		return (node->parent->left);
	else if (node->parent && node->parent->right != node)
		return (node->parent->right);
	return (NULL);
}

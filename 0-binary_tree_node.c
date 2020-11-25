#include "binary_trees.h"
/**
 * binary_tree_node - Create a binary tree
 * @parent: a parent
 * @value: a value
 * Description - create a binary tree node
 * Return: a pointer to a new node or NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);
	new->parent = parent;
	new->n = value;
	new->left = NULL;
	new->right = NULL;
	return (new);
}

#include "binary_trees.h"
/**
 * binary_tree_insert_right -Inserts a node as the right-child of another node
 * @parent: a parent
 * @value: a value
 * Description: inserts a node as the right-child of another node
 * Return: pointer to a new node, NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);
	new = binary_tree_node(parent, value);
	if (!new)
		return (NULL);
	if (parent->right)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;
	return (new);
}

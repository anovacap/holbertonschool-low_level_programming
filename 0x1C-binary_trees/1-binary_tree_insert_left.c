#include "binary_trees.h"
/**
 * binary_tree_insert_left -  inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: the value to store in the new node
 * Return: pointer to the created node, or NULL if parent is NULL or fail
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *child = NULL;

	if (!parent)
		return (NULL);
	child = malloc(sizeof(binary_tree_t));
	if (!child)
		return (NULL);
	child->n = value;
	if (parent->left != NULL)
	{
		child->left = parent->left;
		parent->left->parent = child;
		child->parent = parent;
		parent->left = child;
		child->right = NULL;
	}
	else
	{
		parent->left = child;
		child->left = NULL;
		child->right = NULL;
	}
	return (child);
}

#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to the node to insert the right-child in
 * @value: the value to store in the new node
 * Return: pointer to the created node, or NULL if parent is NULL or fail
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *child = NULL;

	if (!parent)
		return (NULL);
	child = malloc(sizeof(binary_tree_t));
	if (!child)
		return (NULL);
	child->n = value;
	if (parent->right != NULL)
	{
		child->right = parent->right;
		parent->right->parent = child;
		child->parent = parent;
		parent->right = child;
		child->left = NULL;
	}
	else
	{
		parent->right = child;
		child->left = NULL;
		child->right = NULL;
	}
	return (child);
}

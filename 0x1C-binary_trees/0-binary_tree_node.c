#include "binary_trees.h"
/**
 * binary_tree_node - creates a binary tree node
 * @parent: pointer to the parent node
 * @value: value to put in the new node
 * Return: a pointer to binary_tree_t node or NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *child = NULL;

	child = malloc(sizeof(binary_tree_t));
	if (!child)
		return (NULL);
	child->parent = parent;
	child->n = value;
	child->left = NULL;
	child->right = NULL;
	return (child);
}

#include "binary_trees.h"
/**
 * binary_tree_sibling - returns the sibling to the node supplied
 * @node: node to find sibling of
 * Return: pointer to node or NULL
**/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node->parent->right == node)
		return (node->parent->left);
	return (node->parent->right);
}

#include "binary_trees.h"
/**
 * binary_tree_depth - computes the number of layers deep the node
 * @tree: pointer to the starting node
 * Return: depth of node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree == NULL)
		return (0);
	if (tree->parent)
		return (1 + binary_tree_depth(tree->parent));
	return (0);
}

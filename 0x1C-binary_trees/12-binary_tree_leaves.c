#include "binary_trees.h"
/**
 * binary_tree_leaves - measures the leaves of a binary tree
 * @tree: pointer to the root node of the tree to traverse
 * Return: leaves_t leaves of tree or 0 if no tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->right && !tree->left)
		return (1);
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}

#include "binary_trees.h"
/**
 *  binary_tree_is_full - determines if all nodes have two or none children
 *  @tree: root of the tree to check
 *  Return: 1 if full else 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->right && !tree->left)
		return (1);
	if (tree->right && tree->left)
		return (binary_tree_is_full(tree->right) && binary_tree_is_full(tree->left));
	return (0);
}

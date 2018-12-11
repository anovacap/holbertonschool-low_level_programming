#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to traverse
 * Return: size_t height of tree or 0 if no tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l;
	size_t height_r;

	if (!tree)
		return (0);
	if (tree->left)
		height_l = 1 + binary_tree_height(tree->left);
	else
		height_l = 0;
	if (tree->right)
		height_r = 1 + binary_tree_height(tree->right);
	else
		height_r = 0;
	if (height_l > height_r)
		return (height_l);
	else
		return (height_r);
}

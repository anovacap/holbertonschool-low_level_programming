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

/**
 *  binary_tree_is_perfect - determines if all nodes have two or none children
 *  @tree: root of the tree to check
 *  Return: 1 if perfect else 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int x;
	int y;
	int i;
	int res = 1;

	x = binary_tree_height(tree);
	y = binary_tree_leaves(tree);
	for (i = 0; i < x; i++)
		res *= 2;
	if (res == y)
		return (1);
	else
		return (0);
}

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
		return (height_l + 1);
	else
		return (height_r + 1);
}
/**
 * binary_print_levelorder - helper for binary_tree_levelorder
 * @tree: pointer to the root node of the tree to traverse
 * @func: a function to call for each node. Takes node value as arg
 * @level: height level of tree
 * Return: nothing
 */
void binary_print_levelorder(const binary_tree_t *tree,
	 void (*func)(int), size_t level)
{
	if (!tree || !func)
		return;
	if (level == 1)
		func(tree->n);
	else
	{
		binary_print_levelorder(tree->left, func, level - 1);
		binary_print_levelorder(tree->right, func, level - 1);
	}
}
/**
 * binary_tree_levelorder - through a binary tree using levelorder traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: a function to call for each node. Takes node value as arg
 * Return: Nothing
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t height = binary_tree_height(tree);
	size_t i = 0;

	if (!tree || !func)
		return;
	while (i <= height)
	{
		binary_print_levelorder(tree, func, i);
		i++;
	}
}

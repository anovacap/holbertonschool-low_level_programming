#include "binary_trees.h"
/**
 * binary_tree_postorder - through a binary tree using in-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: a function to call for each node. Takes node value as arg
 * Return: Nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	if (tree == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}

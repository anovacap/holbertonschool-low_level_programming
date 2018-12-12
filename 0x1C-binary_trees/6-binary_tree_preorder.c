#include "binary_trees.h"
/**
 * binary_tree_preorder - through a binary tree using pre-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: a function to call for each node. Takes node value as arg
 * Return: Nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	if (tree == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}

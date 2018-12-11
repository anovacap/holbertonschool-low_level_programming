#include "binary_trees.h"
/**
 * binary_tree_balance - calcs the balance of a tree
 * @tree: pointer to the root node of the tree to traverse
 * Return: postive number is right has more
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int r = 0, l = 0;

	if (!tree)
		return (0);
	l = binary_tree_height(tree->left);
	if (tree->left)
		l++;
	r = binary_tree_height(tree->right);
	if (tree->right)
		r++;
	return (l - r);
}

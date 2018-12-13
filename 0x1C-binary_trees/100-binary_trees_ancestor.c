#include "binary_trees.h"
/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Return: pointer to the lowest common ancestor
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
	const binary_tree_t *second)
{
	binary_tree_t *f_run, *s_run;

	if (!first || !second)
		return (NULL);
	if (!first->parent || !second->parent)
		return (NULL);
 	f_run = (binary_tree_t *)first;
	s_run = (binary_tree_t *)second;
	while (f_run->parent != NULL)
	{
		while (s_run->parent != NULL)
		{
			if (f_run == s_run)
				break;
			s_run = s_run->parent;
		}
		if (f_run == s_run)
			break;
		f_run = f_run->parent;
		s_run = (binary_tree_t *)second;
	}
	return (f_run);
}

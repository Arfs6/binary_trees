#include<stddef.h>

#include "binary_trees.h"


/**
 * binary_trees_ancestor - return the lowest common ancestor of two nodes
 * @first: first node
 * @second: second node
 *
 * Return: lowest common ancestor or
 * NULL: no common ancestor
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	binary_tree_t *f_parent, *s_parent;

	if (!first || !second || !first->parent || !second->parent)
		return (NULL);

	f_parent = (binary_tree_t *)first;

	while (1)
	{
		s_parent = (binary_tree_t *)second;
		while (s_parent)
		{
			if (f_parent == first && s_parent == second)
			{
				s_parent = s_parent->parent;
				continue;
			}
			if (s_parent == f_parent)
				return (f_parent);
			s_parent = s_parent->parent;
		}
		f_parent = f_parent->parent;
	}

	return (NULL);
}

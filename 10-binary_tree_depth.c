#include <stdlib.h>

#include "binary_trees.h"


/**
 * binary_tree_depth - returns the depth of the current node in a tree
 * @tree: tree or node to check
 *
 * Return: depth of node or
 * 0: invalid tree/node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->parent == NULL)
		return (0);

	return (binary_tree_depth(tree->parent) + 1);
}

#include <stddef.h>

#include "binary_trees.h"


/**
 * binary_tree_nodes - counts nodes in a tree with at least one children
 * @tree: tree to inpect
 *
 * Return: Number of nodes with at least one child or
 * 0: invalid tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes;

	if (tree == NULL)
		return (0); /* invalid tree */
	if (tree->left == NULL && tree->right == NULL)
		return (0); /* reached the leaf of the tree */

	/* count the number of nodes in each sub-tree */
	nodes = binary_tree_nodes(tree->left);
	nodes += binary_tree_nodes(tree->right);

	return (nodes + 1); /* plus current node */
}

#include <stddef.h>

#include "binary_trees.h"


/**
 * binary_tree_leaves - get the number of leaves in a tree
 * @tree: tree to inspect
 *
 * Return: number of leafs in the tree or
 * 0: invalid tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	leaves = tree->left ? binary_tree_leaves(tree->left) : 0;
	leaves += tree->right ? binary_tree_leaves(tree->right) : 0;

	return (leaves);
}

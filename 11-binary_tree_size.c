#include <stddef.h>

#include "binary_trees.h"


/**
 * binary_tree_size - finds the size of a binary tree
 * @tree: tree to find the size of
 *
 * Return: size of tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
		return (0); /* end of tree or invalid tree */

	if (binary_tree_is_leaf(tree))
		return (1);

	size = binary_tree_size(tree->left);
	size += binary_tree_size(tree->right);

	return (size + 1);
}

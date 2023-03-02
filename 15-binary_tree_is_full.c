#include <stddef.h>

#include "binary_trees.h"


/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: tree to inspect
 *
 * Return: 1: it is full
 * 0: it isn't full
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	if (!tree->left || !tree->right)
		return (0); /* not full */

	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}

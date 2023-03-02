#include <stdlib.h>

#include "binary_trees.h"


/**
 * binary_tree_is_root - checks if the node passed is the root node
 * @node: node to check
 *
 * Return: 1: node passed is the root
 * 0: node passed is not a root or
 * node passed is NULL
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
	{
		if (node->left == NULL && node->right == NULL)
			return (1);
		else if ((node->left != NULL &&
					node->left->parent == node &&
					node->right == NULL))
		return (1);
		else if (node->right != NULL &&
				node->right->parent == node &&
				node->left == NULL)
			return (1);
		else if (node->left && node->right &&
				node->left->parent == node && node->right->parent == node)
			return (1);
	}

	return (0);
}

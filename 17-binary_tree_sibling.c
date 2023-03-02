#include <stddef.h>

#include "binary_trees.h"


/**
 * binary_tree_sibling- get the sibling of a node
 * @tree: node: node to get it's sibling.
 *
 * Return: the sibling of node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	return (node->parent->right != node ? node->parent->right : node->parent->left);
}

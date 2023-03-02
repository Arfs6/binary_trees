#include <stddef.h>

#include "binary_trees.h"


/**
 * _sibling- get the sibling of a node
 * @node: node to get it's sibling.
 *
 * Return: the sibling of node
 */
binary_tree_t *_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	return (node->parent->right != node
			? node->parent->right : node->parent->left);
}

/**
 * binary_tree_uncle - get the uncle of a node in a binary tree
 * @node: node to inspect
 *
 * Return: pointer to uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	return (_sibling(node->parent));
}

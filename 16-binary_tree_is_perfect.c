#include <stddef.h>

#include "binary_trees.h"


/**
 * _is_full - checks if a binary tree is full
 * @tree: tree to inspect
 *
 * Return: 1: it is full
 * 0: it isn't full
 */
int _is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	if (!tree->left || !tree->right)
		return (0); /* not full */

	return (_is_full(tree->left) && _is_full(tree->right));
}

/**
 * _height - Measures the height of a binary tree
 *
 * @tree: Pointer to the node to measures the height
 *
 * Return: The height of the tree starting at @node
 */
static int _height(const binary_tree_t *tree)
{
	int height_l;
	int height_r;

	if (!tree->left && !tree->right)
		return (1);

	height_l = tree->left ? 1 + _height(tree->left) : 0;
	height_r = tree->right ? 1 + _height(tree->right) : 0;
	return (height_l > height_r ? height_l : height_r);
}

/**
 * _balance - get the balance factor of a tree
 * @tree: tree to inspect
 *
 * Return: balance factor of the tree or
 * 0: invalid tree
 */
int _balance(const binary_tree_t *tree)
{
	int l = 0, r = 0;

	if (tree == NULL)
		return (0);

	l = tree->left ? _height(tree->left) : 0;
	r = tree->right ? _height(tree->right) : 0;

	/* printf(" %i - %i ", l, r); */
	return (l - r);
}

/**
 * binary_tree_is_perfect - check if a binary tree is perfect
 * @tree: tree to inspect
 *
 * Return: 1: it is a perfect tree or
 * 0: it is not a perfect tree
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!_is_full(tree))
		return (0);

	if (_balance(tree))
		return (0);

	return (1);
}

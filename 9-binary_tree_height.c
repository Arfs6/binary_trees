#include <stdlib.h>
#include <stdio.h>

#include "binary_trees.h"


static size_t _height(const binary_tree_t *tree);

/**
 * _height - returns the height of the binary tree
 * @tree: tree to get height of
 *
 * Return: size of the tree
 * 0: tree is NULL
 */
static size_t _height(const binary_tree_t *tree)
{
	size_t height_l, height_r;

	/* printf("in %d:\n", tree->n); */

	if (!tree->left && !tree->right)
	{
		/* printf("found a leaf: %d\n", tree->n); */
		return (0);
	}

	/* printf("checking left...\n"); */
	height_l = tree->left ? 1 + _height(tree->left) : 0;
	/* printf("in %d: height_l = %lu\n", tree->n, height_l); */
	/* printf("checking right...\n"); */
	height_r = tree->right ? 1 + _height(tree->right) : 0;
	/* printf("in %d: height_r = %lu\n", tree->n, height_r); */

	return (height_r > height_l ? height_r : height_l);
}

/**
 * binary_tree_height - return the height of the binary tree
 * @tree: tree to get height
 *
 * Return: height of tree or
 * 0: invalid tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	return (tree ? _height(tree) : 0);
}

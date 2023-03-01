#include <stdlib.h>

#include "binary_trees.h"


/**
 * binary_tree_preorder - visit the tree node in pre order
 * @tree: tree to iterate through
 * @func: function to call on each node's data
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func == NULL)
		return; /* invalid function */
	if (tree == NULL)
		return; /* end of tree or invalid tree */

	/**
	 * visit root node
	 * recursively visit left sub-tree
	 * recursively visit right sub-tree
	 */
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}

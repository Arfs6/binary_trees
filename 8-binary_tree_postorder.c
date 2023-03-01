#include <stdlib.h>

#include "binary_trees.h"


/**
 * binary_tree_postorder - visit the tree node in pre order
 * @tree: tree to iterate through
 * @func: function to call on each node's data
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func == NULL)
		return; /* invalid function */
	if (tree == NULL)
		return; /* end of tree or invalid tree */

	/**
	 * recursively visit left sub-tree
	 * recursively visit right sub-tree
	 * visit root node
	 */
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}

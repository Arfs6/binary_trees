#include <stdlib.h>

#include "binary_trees.h"


/**
 * binary_tree_inorder - visit the tree node in pre order
 * @tree: tree to iterate through
 * @func: function to call on each node's data
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func == NULL)
		return; /* invalid function */
	if (tree == NULL)
		return; /* end of tree or invalid tree */

	/**
	 * recursively visit left sub-tree
	 * visit root node
	 * recursively visit right sub-tree
	 */
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}

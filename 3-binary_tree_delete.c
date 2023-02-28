# include <stdlib.h>

#include "binary_trees.h"


/**
 * binary_tree_delete - delete a binary tree
 * @tree: tree to delete
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	/* recursively delete the left and right sub-tree */
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
}

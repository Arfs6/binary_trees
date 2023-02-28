#include <stdlib.h>

#include "binary_trees.h"


/**
 * binary_tree_insert_left - insert a new node to the left of parent
 * @parent: parent of the new node
 * @value: value to give to the new node
 *
 * Return: pointer to the new node
 * NULL: insufficient memory or
 * parent is NULL.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = malloc(sizeof(*new));
	if (new == NULL)
		return (NULL);

	/* set parent's attributes :) */
	new->n = value;
	new->left = new->right = NULL;
	new->parent = parent;

	/* set parent's left */
	if (parent->left == NULL)
	{
		parent->left = new;
		return (new);
	}

	/* put new between parent and parent's left */
	new->left = parent->left;
	new->left->parent = new;
	parent->left = new;
	return (new);
}

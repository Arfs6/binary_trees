#include <stdlib.h>

#include "binary_trees.h"


/**
 * binary_tree_node - create a new node
 * @parent: parent of the new node
 * @value: value to add to the new node
 * Return: pointer to the new node
 * NULL: insufficient memory
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(*new));
	if (new == NULL)
		return (NULL); /* insufficient memory */

	new->n = value;
	new->left = new->right = NULL;
	new->parent = parent;

	if (new->parent == NULL) /* root */
		return new;

	if (new->n < parent->n)
		parent->left = new;
	else
		parent->right = new;

	return new;
}

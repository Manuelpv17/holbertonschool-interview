#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in the new node
 * Return: pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	new = malloc(sizeof(binary_tree_t) * 1);
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->right = NULL;
	new->left = NULL;

	new->parent = parent;

	return (new);
}

#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - creates a binary tree node
 * @parent: the parent of the node
 * @value: the value of the node
 * Return: pointer to created node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));

	node->parent = parent;

	node->n = value;

	node->left = NULL;

	node->right = NULL;
	return (node);
}

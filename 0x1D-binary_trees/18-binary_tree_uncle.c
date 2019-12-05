#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node
 * Return: the uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{

	binary_tree_t *uncle;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	uncle = node->parent->parent->right;

	if (uncle && uncle == node->parent)
	{
		if (node->parent->parent->left == NULL)
			return (NULL);
		else
			return (node->parent->parent->left);

	}
	return (uncle);
}

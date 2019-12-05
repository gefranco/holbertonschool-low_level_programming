#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to the node
 * Return: the sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{


	binary_tree_t *sibling;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	sibling = node->parent->right;

	if (sibling && sibling == node)
	{
		if (node->parent->left == NULL)
			return (NULL);
		else
			return (node->parent->left);

	}
	return (sibling);

}

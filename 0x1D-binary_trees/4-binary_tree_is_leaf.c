#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_is_leaf - deletes an entire binary tree
 * @node: the node to check if is leaf
 * Return: 1 if is leaf 0 otherwise
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	else if (!node->left && !node->right)
		return (1);
	else
		return (0);




}

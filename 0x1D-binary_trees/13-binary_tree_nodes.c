#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root
 * Return: number of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);
	else if (tree->left || tree->right)
		return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);


	else
		return (0);
}

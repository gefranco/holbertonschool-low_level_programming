#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root
 * Return: the size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{



	if (tree == NULL)
		return (0);

	else if (tree->left == NULL && tree->right == NULL)
		return (1);

	return ((binary_tree_size(tree->left) + binary_tree_size(tree->right)) + 1);

}

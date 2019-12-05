#include "binary_trees.h"
#include <stdlib.h>

size_t max_number(size_t num1, size_t num2);

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root
 * Return: the height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{


	if (tree == NULL)
		return (0);

	else if (tree->left == NULL && tree->right == NULL)
		return (0);

	return (max_number(binary_tree_height
			(tree->left), binary_tree_height(tree->right)) + 1);

}

/**
 * max_number - return the max number
 * @num1: number 1
 * @num2: number 2
 * Return: the max number
 */
size_t max_number(size_t num1, size_t num2)
{
	if (num1 > num2)
		return (num1);
	else
		return (num2);
}

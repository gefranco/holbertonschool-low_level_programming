#include "binary_trees.h"
#include <stdlib.h>

int max_number(int num1, int num2);
int tree_height(const binary_tree_t *tree);

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root
 * Return: number of nodes
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	int left = tree_height(tree->left) + 1;
	int right = tree_height(tree->right) + 1;

	return (left - right);
}
/**
 * tree_height - the height of a binary tree
 * @tree: pointer to the root
 * Return: the height
 */
int tree_height(const binary_tree_t *tree)
{

	int left = 0;
	int right = 0;
	int h = 0;

	if (tree == NULL)
		return (0);

	left = tree_height(tree->left);
	right = tree_height(tree->right);
	h = 0;
	if (left > right)
		h = 1 + left;
	else
		h = 1 + right;
	return (h);
}

#include "binary_trees.h"

int tree_height(const binary_tree_t *tree);
int binary_tree_is_perfect_(const binary_tree_t *tree, int h, int level);

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root
 * Return: 1 if is perfect 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int h;

	if (tree == NULL)
		return (0);
	h = tree_height(tree);

	return (binary_tree_is_perfect_(tree, h, 0));
}
/**
 * binary_tree_is_perfect_ - checks if a binary tree is perfect
 * @tree: pointer to the root
 * @h:the height of the tree
 * @level: the level
 * Return: 1 if is perfect 0 otherwise
 */
int binary_tree_is_perfect_(const binary_tree_t *tree, int h, int level)
{

	if (tree == NULL)
		return (1);
	if (tree->left == NULL && tree->right == NULL)
	{
		return ((h == level + 1));
	}
	if (tree->left && tree->right)
		return (binary_tree_is_perfect_(tree->left, h, level + 1) &&
			binary_tree_is_perfect_(tree->right, h, level + 1));

	return (0);
}
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

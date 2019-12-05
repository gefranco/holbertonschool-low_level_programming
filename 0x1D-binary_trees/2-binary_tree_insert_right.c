#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: the parent of the node
 * @value: the value of the node
 * Return: pointer to created node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	node->parent = parent;

	node->n = value;

	node->right = NULL;
	/*
	 * if there is a child
	 */
	if (parent->right)
	{
		/*
		 * new parent from the right node is the created node
		 */
		parent->right->parent = node;
		/*
		 * nd the left node from the new one is the right from the parent
		 */
		node->right = parent->right;

	}
	parent->right = node;
	node->left = NULL;
	return (node);
}

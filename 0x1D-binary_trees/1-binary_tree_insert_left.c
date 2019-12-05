#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: the parent of the node
 * @value: the value of the node
 * Return: pointer to created node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	
	if (node == NULL)
		return NULL;
	node->parent = parent;

	node->n = value;
	/*
	 * if there is a child
	 */
	if (parent->left)
	{
		/*
		 * new parent from the left node is the created node
		 */
		parent->left->parent = node;
		/*
		 * nd the left node from the new one is the left from the parent
		 */
		node->left = parent->left;

	}
	parent->left = node;
	node->right = NULL;
	return (node);
}

#include "binary_trees.h"
#include <stdlib.h>

size_t max_number(size_t num1, size_t num2);

size_t binary_tree_height(const binary_tree_t *tree)
{



	 if(tree == NULL)
                return 0;

        else if(tree->left == NULL && tree->right == NULL)
                return(0);

        return max_number(binary_tree_height(tree->left), binary_tree_height(tree->right)) + 1;
	
}

/*
size_t count_height(const binary_tree_t *tree)
{
	if(tree == NULL)
		return 0;
	
	else if(tree->left == NULL && tree->right == NULL)
		return(0);
	
	return max_number(count_height(tree->left), count_height(tree->right)) + 1;
	
}
*/
size_t max_number(size_t num1, size_t num2)
{
	if (num1 > num2)
		return num1;
	else
		return num2;
}

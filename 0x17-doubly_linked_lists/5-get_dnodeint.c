#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a double linked list
 * @head: the head of the list
 * @index: the index of the node
 * Return: the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

	unsigned int i;
	dlistint_t *tmp_node;
	
	i = 0;
	tmp_node = head;

	while (tmp_node)
	{
		tmp_node = tmp_node->next;
		i++;
		if (i == index)
			break;
	}
	if (index > i)
	{
		return (NULL);
	}

	return (tmp_node);
}

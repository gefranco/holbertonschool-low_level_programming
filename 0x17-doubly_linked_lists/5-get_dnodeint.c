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

	i = 0;

	while (head)
	{
		head = head->next;
		i++;
		if (i == index)
			break;
	}

	return (head);
}

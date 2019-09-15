#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - count the elements of a double linked list
 * @h: the header list
 * Return: the size of nodes in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count_nodes = 0;

	while (h)
	{
		count_nodes++;
		h = h->next;
	}
	return (count_nodes);
}


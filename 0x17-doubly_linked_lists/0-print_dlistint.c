#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - print the elements of a double list
 * @h: the header list
 * Return: the size of printed nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count_nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count_nodes++;
	}
	return (count_nodes);
}

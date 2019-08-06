#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - print the elements of a simple list
 * @h: the list
 * Return: the size of printed nodes
 */
size_t print_listint(const listint_t *h)
{
	int count;

	count = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
		continue;



	}
	return (count);


}

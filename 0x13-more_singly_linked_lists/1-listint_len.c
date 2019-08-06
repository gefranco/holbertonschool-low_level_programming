#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * listint_len - count the elements of a simple list
 * @h: the list
 * Return: the size of nodes in the list
 */
size_t listint_len(const listint_t *h)
{
	int count;

	count = 0;
	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}


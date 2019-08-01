#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * list_len - count the elements of a simple list
 * @h: the list
 * Return: the size of nodes in the list
 */
size_t list_len(const list_t *h)
{
	int count;
	/*
	 * if(h->next == NULL)
		return count;
		*/
	count = 0;
	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}


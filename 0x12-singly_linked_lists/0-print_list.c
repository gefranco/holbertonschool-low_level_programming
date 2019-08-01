#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - print the elements of a simple list
 * @h: the list
 *
 */
size_t print_list(const list_t *h)
{
	int count;
	/*
	 * if(h->next == NULL)
		return count;
	*/
	count = 0;
	while (h)
	/*while((temp=h->next))*/
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
			h = h->next;
			count++;
			continue;

		}
		printf("[%d] %s\n", h->len, h->str);
		count++;
		h = h->next;


	}
	return (count);


}

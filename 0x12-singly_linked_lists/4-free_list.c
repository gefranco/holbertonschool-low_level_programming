#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - free a simple list
 * @head: the list
 */
void free_list(list_t *head)
{
	list_t *headtmp;
	/*
	 * if(h->next == NULL)
		return count;
	*/

	if (head == NULL)
		return;

	while (head->next)
	/*while((temp=h->next))*/
	{
		if (head->str)
		{
			free(head->str);

		}
		if (head->next)
			headtmp = head->next;
		free(head);
		head = headtmp;

	}
	if (head->str)
		free(head->str);
	free(head);

}

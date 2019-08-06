#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - free a simple list
 * @head: the list
 */
void free_listint(listint_t *head)
{
/*	listint_t *headtmp;*/

	if (head != NULL)
	{

/*
 * while (head->next)
	{
			headtmp = head->next;
		free(head);
		head = headtmp;

	}
	free(head);
*/

	free_listint(head->next);
	free(head);
	}

}

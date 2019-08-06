#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * free_listint2 - free a simple list
 * @head: the list
 */
void free_listint2(listint_t **head)
{
	listint_t *headtmp;
	listint_t *head1;

	if ((&*head) == NULL)
		return;

	head1 = *head;
	while (head1->next)
	{
		/*if (head->next)*/
		headtmp = head1->next;
		free(head1);
		head1 = headtmp;

	}
	free(head1);

	*head = NULL;
}

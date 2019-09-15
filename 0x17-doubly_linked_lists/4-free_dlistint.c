#include<stdio.h>
#include<stdlib.h>
#include "lists.h"
/**
 * free_dlistint - free a double linked list
 * @head: the header of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp_node;

	while (head)
	{

		tmp_node = head->next;

		free(head);

		head = tmp_node;
	}
}

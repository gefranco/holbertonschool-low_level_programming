#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at index
 * @head: the pointer to the head list
 * @index: the node index
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;

	dlistint_t *node;
	dlistint_t *myhead;

	myhead = *head;

	if (myhead == NULL)
		return (-1);


	for (i = 1; i < index ; i++)
	{
		myhead = myhead->next;
		if (myhead == NULL)
			return (-1);

	}

	if (index == 0)
	{
		node = (*head)->next;
		free(*head);
		*head = node;
		return (1);
		/*myhead = node;*/

	}
	else
	{
		node = (myhead->next)->next;
		free(myhead->next);
		myhead->next = node;
		return (1);
	}
}

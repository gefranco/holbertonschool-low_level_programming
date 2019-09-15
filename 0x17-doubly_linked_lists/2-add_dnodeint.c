#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint - add a new node at the beginning of a double linked list.
 * @head: the point to the header of the list
 * @n: the number to put in the node
 * Return: the created node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{

	if (*head == NULL)
	{
		*head = malloc(sizeof(struct dlistint_s));
		if (*head == NULL)
			return (NULL);
		(*head)->n = n;
		(*head)->next = NULL;
		return (*head);
	}


	(*head)->prev = malloc(sizeof(struct dlistint_s));
	if ((*head)->prev == NULL)
		return (NULL);
	((*head)->prev->n) = n;

	((*head)->prev->next) = *head;

	*head = (*head)->prev;

	return (*head);
}

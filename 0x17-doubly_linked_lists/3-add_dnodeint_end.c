#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a double linked list.
 * @head: the pointer to the head of the list
 * @n: the number to put in the node
 * Return: the created node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{

	dlistint_t *nodo;

	if (*head == NULL)
	{
		*head = malloc(sizeof(struct dlistint_s));
		if (*head == NULL)
			return (NULL);
		(*head)->n = n;
		(*head)->next = NULL;
		return (*head);
	}

	nodo = *head;
	while (nodo->next)
	{
		nodo = nodo->next;

	}
	nodo->next = malloc(sizeof(struct dlistint_s));
	if (nodo->next == NULL)
		return (NULL);
	nodo->next->n = n;


	nodo->next->next = NULL;
	nodo->next->prev = nodo;

	return (nodo->next);
}

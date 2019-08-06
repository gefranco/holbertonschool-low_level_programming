#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a list_t list.
 * @head: the pointer to the list
 * @n: the number to put in the node
 * Return: the created node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *new_node;

	if (*head == NULL)
	{
		node = malloc(sizeof(listint_t));
		if (node == NULL)
			return (NULL);
		node->next = NULL;
		node->n = n;
		*head = node;
		return (*head);
	}
	if ((*head)->next)
		node = (*head)->next;
	else
		node = (*head);
	while (node->next)
	{
		node = node->next;
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	node->next = new_node;
	return (node);
}

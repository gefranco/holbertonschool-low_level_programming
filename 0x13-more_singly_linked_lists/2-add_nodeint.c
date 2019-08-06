#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a list_t list.
 * @head: the list
 * @n: the number to put in the node
 * Return: the created node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;


	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = *head;
	*head = node;

	return (*head);

}

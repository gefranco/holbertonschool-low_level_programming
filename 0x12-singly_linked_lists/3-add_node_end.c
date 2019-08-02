#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - adds a new node at the beginning of a list_t list.
 * @head: the list
 * @str: the string to put in the node
 * Return: the created node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *new_node;
	int len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	if (*head == NULL)
	{
		node = malloc(sizeof(list_t));
		if (node == NULL)
			return (NULL);
		node->str = strdup(str);
		node->len = len;
		node->next = NULL;
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
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = NULL;
	node->next = new_node;
	return (node);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: the list
 * @str: the string to put in the node
 * Return: the created node
 */
list_t *add_node(list_t **head, const char *str)
{
	char *copy;
	list_t *node;
	int len;
	int i = 0;

	copy = strdup(str);
	len = 0;
	if (!**head)
	{
		return (NULL);
	}
	while (copy[i])
	{
		len++;
		i++;
	}
	if (*head == NULL)
	{
		node = malloc(sizeof(list_t));
		if (!node)
			return (NULL);
		node->str = copy;
		node->len = len;
		node->next = NULL;
		*head = node;
		return (node);
	/*
	 * return *head;
	*/
	}
	node = malloc(sizeof(list_t));
	if (!node)
		return (NULL);
	node->str = copy;
	node->len = len;
	node->next = *head;
	*head = node;

	return (node);

}

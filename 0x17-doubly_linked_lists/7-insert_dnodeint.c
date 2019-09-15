#include <stdlib.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - insert a new node in a double linked list
 * @h: the pointer to the pointer of the head of the list
 * @idx: the position to insert the new node
 * @n: the num data to put in the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int  i = 0;
	dlistint_t *new_node;
	dlistint_t *tmp_node;

	tmp_node = *h;

	if (idx < 0 || *h == NULL)
		return (NULL);
	while (tmp_node)
	{
		i++;
		if (i == idx)
			break;
		tmp_node = tmp_node->next;

	}

	if (idx > i)
		return (NULL);

	new_node = malloc(sizeof(struct dlistint_s));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (tmp_node->next)
	{
		new_node->next = tmp_node->next;
		(tmp_node->next)->prev = new_node;
	}
	new_node->prev = tmp_node;
	tmp_node->next = new_node;

	return (new_node);
}

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
	unsigned int i;

	dlistint_t *node;
	dlistint_t *myhead;
	/*while (h)*/
	myhead = *h;

	for (i = 1; i < idx ; i++)
	{
		myhead = myhead->next;
		if (myhead == NULL)
			return (NULL);
	}

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;

	if (idx == 0)
	{
		node->next = myhead;
		*h = node;
	}
	else
	{
		if (myhead->next)
		{
			node->next = myhead->next;
			node->next->prev = node;
		}
		myhead->next = node;
		node->prev = myhead;
	}
	return (node);
}

#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - print the elements of a simple list
 * @head: the pointerto the head of the list
 * @idx: the position to insert the new node
 * @n: the num data to put in the new node
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;

	listint_t *node;
	listint_t *myhead;
	/*while (h)*/
	myhead = *head;

	for (i = 1; i < idx ; i++)
	{
		if (i + 1 == idx && myhead->next == NULL)
			return (NULL);
		myhead = myhead->next;


	}

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;

	if (idx == 0)
	{
		node->next = myhead;
		*head = node;
	}
	else
	{
		node->next = myhead->next;

		myhead->next = node;
	}

	return (node);


}

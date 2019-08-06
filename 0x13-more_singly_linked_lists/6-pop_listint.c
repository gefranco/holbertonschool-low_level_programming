#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: a pointer to the head of the list
 * Return: the head node's data
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *headtmp;

	if (*head == NULL)
		return (0);


	headtmp = (*head)->next;

	n = (*head)->n;

	free(*head);

	(*head) = headtmp;

	return (n);

}

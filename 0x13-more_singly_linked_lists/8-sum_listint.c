#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - sum all the data (n) of a listint_t linked list.
 * @head: the pointer to the head of the list
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
	long sum;

	sum = 0;
	while (head)
	{
		sum += head->n;
		head = head->next;

	}

	return (sum);
}

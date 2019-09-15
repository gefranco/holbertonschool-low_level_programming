#include<stdlib.h>
#include<stdio.h>
#include "lists.h"
/**
 * sum_dlistint - sum all the data (n) of a double linked list.
 * @head: the pointer to the head of the list
 * Return: the sum
 */
int sum_dlistint(dlistint_t *head)
{
	int total = 0;

	while (head)
	{
		total = total + head->n;
		head = head->next;
	}
	return (total);
}

#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list (Insertion sort algorithm)
 * @list: pointer to the head of the list
 * Return: Always 0
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *listj = *list;
	listint_t *listprev, *tmp;

	while (listj->next)
	{
		if (listj->next->n < listj->n)
		{
			swap(listj);
			print_list(*list);
			listprev = listj;
			while (listprev)
			{
				if (listprev->prev && listprev->prev->n > listprev->n)
				{
					if (listprev->prev->prev == NULL)
					{
						listprev->prev->next = listprev->next;
						listprev->next->prev = listprev->prev;
						listprev->prev->prev = listprev;
						tmp = listprev->prev;
						listprev->next = tmp;
						listprev->prev = NULL;
						*list = listprev;
					}
					else if (listprev->prev->prev)
						swap(listprev->prev);
					else
						listprev = listprev->prev;
				print_list(*list);
				}
				else
					listprev = listprev->prev;
			}
		}
		else
			listj = listj->next;
	}
}


/**
 * swap - swap two nodes from a doubly linked list
 * @listj: header
 */
void swap(listint_t *listj)
{
	listint_t *tmp, *prev;
		if (listj->next->n < listj->n)
		{
			if (listj->next->next)
			{
				prev = listj->next;
				if (listj->prev)
				{
					listj->prev->next = listj->next;
				}
				else
				{

				}
				listj->next->prev = listj->prev;
				tmp = listj->next->next;
				listj->next->next = listj;
				listj->next = tmp;

				listj->next->prev = listj;
				if (listj->prev)
					listj->prev = prev;

			}
			else
			{
				tmp = listj->next;
				listj->prev->next = tmp;
				listj->next->prev = listj->prev;
				listj->prev = listj->next;
				listj->next->next = listj;
				listj->next = NULL;
			}
		}
}

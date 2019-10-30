#include "sort.h"

void swap(listint_t *listj);
void insertion_sort_list(listint_t **list)
{
	
	listint_t *listj = *list;
	listint_t *listprev, *tmp;
	while (listj->next)
	{
		if ((listj->next->n < listj->n))
		{
			/*
			 * swap
			 * go back until num <
			 * */
			
			
			
			swap(listj);
			
			
			listprev = listj;


			while (listprev)
			{
				if(listprev->prev && listprev->prev->n > listprev->n)
				{
					/*if(listprev->prev->prev)*/
					if (listprev->prev->prev==NULL)
					{
						listprev->prev->next=listprev->next;
						listprev->next->prev = listprev->prev;

						listprev->prev->prev = listprev;
						tmp=listprev->prev;
						listprev->next= tmp;
						
						listprev->prev=NULL;

						*list = listprev;
						/*print_list(listprev);*/
					}

					else if(listprev->prev->prev)
						swap(listprev->prev);
					else
						listprev = listprev->prev;

				print_list(*list);
				}
				else
					listprev = listprev->prev;
					
			}
			/*if (listj->next->next)
			{
				prev = listj->next;
				listj->prev->next = listj->next;

				listj->next->prev = listj->prev;

				tmp = listj->next->next;
				listj->next->next = listj;
				listj->next = tmp;

				listj->next->prev = listj;
				listj->prev = prev;

			}
			else
			{
				tmp = listj->next;
                                listj->prev->next = tmp;
				listj->next->next = listj;
				listj->next = NULL;
			}*/
		}


		else	
			listj = listj->next;
		print_list(*list);
	}
}



void swap(listint_t *listj)
{
	
	listint_t *tmp, *prev;
		if ((listj->next->n < listj->n))
		{
			/*
			 * swap
			 * go back until num <
			 * */


			if (listj->next->next)
			{
				prev = listj->next;
			
		      /*		listj->next->prev = listj->prev;

                                tmp = listj->next->next;
                                listj->next->next = listj;
                                listj->next = tmp;

                                listj->next->prev = listj;
			*/
				if(listj->prev)
				{	
					listj->prev->next = listj->next;


				/*listj->next->prev = listj->prev;

                                tmp = listj->next->next;
                                listj->next->next = listj;
                                listj->next = tmp;

                                listj->next->prev = listj;
*/
		/*		listj->prev = prev;*/
				}
				else
				{
				/*	listj = listj->next;
					print_list(listj);*/
					/*listj=listj->next;
					listj->prev=NULL;*/
					/*listj->prev = 
					listj->prev = tmp;
					listj->prev->prev = NULL;
				*/

				}	

				listj->next->prev = listj->prev;

				tmp = listj->next->next;
				listj->next->next = listj;
				listj->next = tmp;

				listj->next->prev = listj;
			if(listj->prev)
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


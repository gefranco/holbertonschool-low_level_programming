#include "hash_tables.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * hash_table_print - a function that print a hashtable
 * @ht: the hashtable
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int size;
	int printed = 0;
	unsigned long int i, contador = 0;
	hash_node_t *node, *tmp_node, **myarray;
	if (ht == NULL || ht->array == NULL || ht->size<1)
        {
                return;
        }
	size = ht->size;
	myarray = malloc(ht->size * sizeof(hash_node_t));
	printf("{");
	for (i = 0; i < size; i++)
	{
		node = ht->array[i];
		if (node && node->next == NULL)
			if (printed == 0)
			{
				printed = 1;
				myarray[contador] = node;
				contador++;

				
			}
			else
			{
							
				myarray[contador] = node;
				contador++;
			}
		else if (node)
		{
			tmp_node = node;
			while (tmp_node != NULL)
			{
				myarray[contador] = node;
				contador++;
				tmp_node = tmp_node->next;
			}

		}


	}
	for(i = 0; i < contador;i++)
		if(i == contador -1)	
			printf("'%s': '%s'", (char *)myarray[i]->key, (char *)myarray[i]->value);
		else
			printf("'%s': '%s', ", (char *)myarray[i]->key, (char *)myarray[i]->value);

	printf("}\n");
}

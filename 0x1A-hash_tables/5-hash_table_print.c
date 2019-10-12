#include "hash_tables.h"
#include <stdio.h>
#include <string.h>

/**
 * hash_table_print - a function that print a hashtable
 * @ht: the hashtable
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int size = ht->size;
	int printed = 0;
	unsigned long int i;
	hash_node_t *node, *tmp_node, *last_node;
	

	if (ht == NULL)
	{
		printf("{}");
		return;
	}
	printf("{");
	for (i = 0; i < size; i++)
	{
		node = ht->array[i];
		last_node = node;
		if (node && node->next == NULL)
			if (printed == 0)
			{
				printf("'%s': '%s' ", (char *)node->key, (char *)node->value);
				printed = 1;
				last_node = node;
			}
			else
			{
				printf(",'%s': '%s' ", (char *)node->key, (char *)node->value);
				
				last_node = node;
				
			}
		else if (node)
		{
			tmp_node = node;
			while (tmp_node->next != NULL)
			{
				printf(",'%s': '%s' ", (char *)tmp_node->key, (char *)tmp_node->value);
				
				last_node = tmp_node;
				
				tmp_node = tmp_node->next;
			}

		}


	}
	if(last_node != NULL)	
	printf("'%s': '%s'", (char *)last_node->key, (char *)last_node->value);
	
	printf("}\n");
}

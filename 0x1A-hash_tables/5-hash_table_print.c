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
	unsigned long int i, size;
	hash_node_t *node, *tmp_node;

	int comma = 0;

	if (ht == NULL || ht->array == NULL)
	{
		return;
	}
	size = ht->size;
	printf("{");

	for (i = 0; i < size; i++)
	{
		node = ht->array[i];
			tmp_node = node;
			while (tmp_node != NULL)
			{
				if (comma == 1)
					printf(", ");
				printf("'%s': '%s'", tmp_node->key, tmp_node->value);
				comma = 1;


				tmp_node = tmp_node->next;
			}

	}
	printf("}\n");

}

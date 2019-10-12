#include "hash_tables.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * hash_table_print - a function that print a hashtable
 * @ht: the hashtable
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int size, i;
	hash_node_t *node, *tmp_node;

	if (ht == NULL || ht->array == NULL || ht->size < 1)
	{
		return;
	}
	size = ht->size;
	for (i = 0; i < size; i++)
	{
		node = ht->array[i];
		if (node && node->next == NULL)
		{
			free(node->value);
			free(node->key);
			free(node);
		}
		else if (node)
		{
			while (node->next != NULL)
			{

				tmp_node = node->next;
				free(node->value);
				free(node->key);
				free(node);

				node = tmp_node;
			}
			free(node);
		}
	}
	free(ht->array);
	free(ht);
}

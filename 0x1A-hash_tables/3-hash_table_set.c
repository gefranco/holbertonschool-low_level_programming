#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: the hash_table
 * @key: the key
 * @value:the value
 * Return: Always EXIT_SUCCESS.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int ki = 0;
	hash_node_t *node, *node_tmp, *new_node;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0 || value == NULL)
		return (0);
	ki = key_index((unsigned char *)key, ht->size);
	if (ht->array[ki] == NULL)
	{
		node = malloc(sizeof(hash_node_t));
		if (node == NULL)
			return (0);
		node->value = strdup(value);
		node->key = strdup(key);
		node->next = NULL;
		ht->array[ki] = node;
		return (1);
	}
	else
	{
		node = ht->array[ki];
		node_tmp = node;
		while (node_tmp)
		{
			if (strcmp(node_tmp->key, key) == 0)
			{
				free(node_tmp->value);
				node_tmp->value = strdup(value);
				return (1);
			}
			node_tmp = node_tmp->next;
		}
		new_node = malloc(sizeof(hash_node_t));
		if (new_node == NULL)
			return (0);
		new_node->value = strdup(value);
		new_node->key = strdup(key);
		new_node->next = node;
		ht->array[ki] = new_node;
	}
	return (1);
}

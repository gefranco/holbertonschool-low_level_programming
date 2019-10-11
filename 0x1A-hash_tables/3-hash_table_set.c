#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * hash_table_set - function that retrieves a value associated with a key
 * @ht: the hash_table
 * @key: the key
 * @value:the value
 * Return: Always EXIT_SUCCESS.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{

	unsigned long int ki = 0;
	hash_node_t **myarray = ht->array;
	hash_node_t *node;
	hash_node_t *new_node;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (0);
	ki = key_index((unsigned char *)key, ht->size);
	node = malloc(sizeof(struct hash_node_s *));
	if (node == NULL)
		return (0);
	node->value = strdup(value);
	node->key = strdup(key);
	node->next = NULL;
	if (myarray[ki] == NULL)
	{
		myarray[ki] = node;
		return (1);
	}
	else
	{
		node = myarray[ki];
		new_node = malloc(sizeof(hash_node_t *));
		if (new_node == NULL)
			return (0);
		new_node->value = (char *)value;
		new_node->key = (char *)key;
		new_node->next = node;
		myarray[ki] = new_node;
		new_node = myarray[ki];

	}
	return (1);
}

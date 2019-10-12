#include "hash_tables.h"
#include <stdio.h>
#include <string.h>

/**
 * hash_table_get - a function that retrieves a value associated with a key
 * @ht: the hashtable
 * @key: the key
 * Return: the value.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int ki;


	hash_node_t *node;

	char *my_key;

	if (key == NULL || strcmp(key, "") == 0 || ht == NULL)

		return (NULL);

	ki = key_index((unsigned char *)key, ht->size);

	node = ht->array[ki];

	if (node && node->next == NULL)
		return (node->value);

	else if (node)
	{
		
		while (node != NULL)
		{
			my_key = (char *) node->key;
			if (strcmp((char *)key, my_key) == 0)
			{

				return (node->value);
			}
			node = node->next;
		}
	}

	return (NULL);
}

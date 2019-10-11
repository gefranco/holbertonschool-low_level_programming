#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{

	unsigned long int ki = 0;
	hash_node_t **myarray = ht->array;

	hash_node_t *node;

	ki = key_index((unsigned char *)key, ht->size);

	node = malloc(sizeof(struct hash_node_s));

	node->value = (char *)value;

	node->key = (char *)key;

	myarray[ki] = node;


	return (1);
}

#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{

	if(ht == NULL || key == NULL)
		return 0;
	unsigned long int ki = 0;
	hash_node_t **myarray = ht->array;

	hash_node_t *node;

	hash_node_t *new_node;

	ki = key_index((unsigned char *)key, ht->size);

	node = malloc(sizeof(struct hash_node_s*));
	if (node == NULL)
		return (0)

	node->value = (char *)value;

	node->key = (char *)key;

 	node->next = NULL;

	if(myarray[ki] == NULL)
	{
		myarray[ki] = node;
		return (1);
	}
	else
	{
		node = myarray[ki];
		 
		new_node = malloc(sizeof(hash_node_t*));
		if (new_node == NULL)
			return (0);
        	new_node->value = (char *)value;

        	new_node->key = (char *)key;
		
		new_node->next = node;

		myarray[ki] = new_node;


	}

	return (1);
}

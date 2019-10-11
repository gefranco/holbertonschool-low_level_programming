#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
hash_table_t *hash_table_create(unsigned long int size)
{

	hash_node_t **array;
	hash_table_t *hash_table;

	unsigned long int i = 0;

	if (size < 1)
		return (NULL);
	array = malloc(size * sizeof(hash_node_t *));
	if (array == NULL)
		return (NULL);


	for (i = 0; i < size; i++)
	{
		array[i] = NULL;
	}

	hash_table = malloc(sizeof(hash_table_t));
		if (hash_table == NULL)
			return (NULL);
	hash_table->size = size;
	hash_table->array = array;
	return (hash_table);

}

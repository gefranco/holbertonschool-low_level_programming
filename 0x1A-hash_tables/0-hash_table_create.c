#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * hash_table_create - a function that creates a hash table.
 * @size: the size of the array
 * Return: a pointer to the newly created hash table or NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{

	hash_node_t **array;
	hash_table_t *hash_table;


	if (size < 1)
		return (NULL);
	array = malloc(size * sizeof(hash_node_t *));
	if (array == NULL)
		return (NULL);

	hash_table = malloc(sizeof(hash_table_t));
		if (hash_table == NULL)
			return (NULL);
	hash_table->size = size;
	hash_table->array = array;
	return (hash_table);

}

#include "hash_tables.h"
#include <stdio.h>

/**
 * key_index - a function that gives you the index of a key
 * @key: the key to get the index
 * @size: the length of the array
 * Return: the index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0;

	index = (hash_djb2(key)) % (size);


	return (index);
}

#include "hash_tables.h"
#include <stdio.h>
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0;

	index = (hash_djb2(key)) & (size - 1);


	return (index);
}

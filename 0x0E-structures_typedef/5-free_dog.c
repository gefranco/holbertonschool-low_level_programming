#include<stdio.h>
#include<stdlib.h>
#include "dog.h"
/**
 * free_dog -  function that frees dogs
 * @d: the pointer to dog_t to free
 */
void free_dog(dog_t *d)
{
	if (d)
		free(d);
}

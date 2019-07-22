#include<stdio.h>
#include<stdlib.h>
#include "dog.h"
/**
 * print_dog -  a function that prints a struct dog
 * @d: pointer to struct dog
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (!d->name)
			d->name = "(nil)";
		printf("Name: %s\n", d->name);
		if (d->age)
			printf("Age: %f\n", d->age);
		else
			printf("Age: (nil)\n");
		if (!d->owner)
			d->owner = "(nil)";
		printf("Owner: %s\n", d->owner);
	}
}

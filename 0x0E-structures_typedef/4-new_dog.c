#include<stdio.h>
#include<stdlib.h>
#include "dog.h"
/**
 * new_dog - a function that creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *mydog;

	mydog = malloc(sizeof(struct dog));
	mydog->name = name;
	mydog->age = age;
	mydog->owner = owner;
	return (mydog);
}

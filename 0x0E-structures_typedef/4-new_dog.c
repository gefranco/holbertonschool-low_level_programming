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
	dog_t *dog1;
	int i = 0;
	int j = 0;
	int i2 = 0;
	int j2 = 0;
	char *myname;
	char *myowner;

	dog1 = malloc(sizeof(struct dog));
	if (dog1 == NULL)
		return (NULL);
	while (name[i])
		i++;
	while (owner[j])
		j++;
	myname = malloc(sizeof(char) * i);
	myowner = malloc(sizeof(char) * j);
	for (; i2 < i; i2++)
	{
		myname[i2] = name[i2];
	}
	for (; j2 < j; j2++)
	{
		myowner[j2] = owner[j2];
	}
	dog1->name = myname;
	dog1->age = age;
	dog1->owner = myowner;
	return (dog1);
}

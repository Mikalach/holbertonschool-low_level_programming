#include "dog.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * new_dog - function to add a second dog
 * @name: new dog name
 * @age: new dog age
 * @owner: new dog owner
 * Return: pointer with the new dog information
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doge;
	int i, j, k;

	doge = malloc(sizeof(dog_t));
	if (doge == NULL)
		return (NULL);

	i = strlen(name) + 1;
	j = strlen(owner) + 1;

	doge->name = malloc(sizeof(char) * i);

	if ((*doge).name == NULL)
	{
		free(doge);
		return (NULL);
	}

	for (k = 0; k < i; k++)
	{
		doge->name[k] = name[k];
	}
	doge->age = age;
	doge->owner = malloc(sizeof(char) * j);

	if ((*doge).owner == NULL)
	{
		free(doge->name);
		free(doge);
		return (NULL);
	}
	for (k = 0; k < j; k++)
	{
		doge->owner[k] = owner[k];
	}
	return (doge);
}

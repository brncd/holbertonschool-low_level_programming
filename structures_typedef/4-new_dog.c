#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include "strcpy.c"
#include "strlen.c"
/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog = NULL;

	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
	{
		free(ndog);
		return (ndog);
	}
	ndog->name = malloc(sizeof(char) * _strlen(name) + 1);
	if (ndog->name == NULL)
	{
		free(ndog);
		return (ndog);
	}
	ndog->owner = malloc(sizeof(char) * _strlen(owner) + 1);
	if (ndog->owner == NULL)
	{
		free(ndog->name);
		free(ndog);
		return (ndog);
	}
	_strcpy(ndog->name, name);
	ndog->age = age;
	_strcpy(ndog->owner, owner);
	return (ndog);
}

#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/** 
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;

	if (name == NULL || owner == NULL || age <= 0)
	{
		return (NULL);
	}
	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
	{
		free(ndog);
		return (NULL);
	}
	ndog->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (ndog->name == NULL)
	{
		free(ndog->name);
		free(ndog);
		return (NULL);
	}
	ndog->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (ndog->owner == NULL)
	{
		free(ndog->owner);
		free(ndog);
		return (NULL);
	}
	ndog->name = strcpy(ndog->name, name);
	ndog->owner = strcpy(ndog->owner, owner);
	ndog->age = age;
	return (ndog);
}

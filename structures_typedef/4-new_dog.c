#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *
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
		return (NULL);
	}
	ndog->name = malloc(sizeof(char) * (strlen(name) + 1));
	ndog->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	ndog->name = strcpy(ndog->name, name);
	ndog->owner == strcpy(ndog->owner, owner);
	ndog->age = age;
	return (ndog);
}

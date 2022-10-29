#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;

	ndog = malloc(sizeof(dog_t));
	ndog->name = name;
	ndog->owner = owner;
	ndog->age = age;
	return (ndog);
}

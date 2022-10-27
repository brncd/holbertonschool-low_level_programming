#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * print_dog -  prints a struct dog
 * @d:struct dog pointer
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		d->name = "(nil)";
	}
	if (d->name == NULL)
	{
		d->age = printf("Age: (nil)");
	}
	if (d->owner == NULL)
	{
		d->owner = "(nil)";
	}
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}

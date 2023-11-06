#include "dog.h"
#include <stdio.h>

/**
 * init_dog - dog function
 * @d: struct
 * @name: char args
 * @age: age args
 * @owner: dog owner
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

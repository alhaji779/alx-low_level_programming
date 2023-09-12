#include <stdio.h>
#include "dog.h"
/**
 * init_dog - function to initialise a struct
 * @d: struct arg
 * @name: name arg
 * @age: age arg
 * @owner: owner args
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}

#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - function to print dogs
 * @d: dog struct
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{

		if (d->name == NULL)
		{
			printf("Name: (nil)\n");
		}
		else
		{
			printf("Name: %s\n", d->name);
		}

		if (d->age)
		{
			printf("Age: %.5f\n", d->age);
		}

		if (d->owner == NULL)
		{
			printf("Owner: (nil)\n");
		}
		else
		{
			printf("Owner: %s\n", d->owner);
		}
	}
}

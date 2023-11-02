#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - checks malloc
 * @b: int arg
 * Return: void
 */
void *malloc_checked(unsigned int b)
{

	void *ptArry;

	ptArry = malloc(b);
	if (ptArry == NULL)
		exit(98);

	return (ptArry);
}

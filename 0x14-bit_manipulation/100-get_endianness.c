#include "main.h"

/**
 * get_endianness - function to check the endianness
 *
 * Return: 0 or 1
 *
 */

int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) &x;

	return (*c);
}

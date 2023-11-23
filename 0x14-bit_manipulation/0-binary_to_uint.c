#include "main.h"
/**
 * binary_to_unit - convert bin to int
 * @b: string arg
 *
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int tt = 0;

	if (b == NULL)
		return (0);
	while (*b)
	{
		if (*b == '1')
			tt = (tt << 1) | 1;
		else if (*b == '0')
			tt <<= 1;
		else
			return (0);
		b++;
	}
	return (tt);
}

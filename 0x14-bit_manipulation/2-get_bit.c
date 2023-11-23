#include "main.h"
/**
 * get_bit - function to get bit a index
 * @n: number args
 * @index: index args
 * Return: int
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 32)
		return (-1);

	return (n >> index & 1);
}

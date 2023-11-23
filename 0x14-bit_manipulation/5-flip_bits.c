#include "main.h"
/**
 * flip_bits - function to flips bits
 * @n: first int 
 * @m: second int
 * Return: unsigned int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int fp;
	unsigned long int i = 0;

	fp = n ^ m;
	while (fp > 0)
	{
		i += fp & 1;
		fp >>= 1;
	}
	return (i);
}

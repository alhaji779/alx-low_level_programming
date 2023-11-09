#include "variadic_functions.h"

/**
 * sum_them_all - function to sum all args
 * @n: const variable
 * Return: 0 or 1
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int count;
	va_list mlist;

	if (n == 0)
		return (0);


        va_start(mlist, n);
	count = 0;

	for (i = 0; i < n; i++)
	{
		count = count + va_arg(mlist, int);
	}

	va_end(mlist);
	printf("%u\n", count);

	return (0);
}

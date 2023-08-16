#include "main.h"
/**
 * print_to_98 - prints natural numbers
 *
 * @n: argument
 *
 * Result: always 0
 *
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		printf("%d,", i);
	}

	printf('\n');
}

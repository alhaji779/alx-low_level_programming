#include "main.h"
#include <stdio.h>
/**
 * print_times_table - creates 9x multiplication table
 *
 * @n: - argument
 * Return: always 0
 *
 */
void print_times_table(int n)
{
	int i;
	int j;
	int k;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			k = i * j;

			if (j == 0)
			{
				_putchar('0');
			}
			else if (k < n)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(k / 10 + '0');
				_putchar(k % 10 + '0');
			}
		}

		_putchar('\n');
	}
}

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

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = i * j;

				if (j == 0)
				{
					_putchar('0');
				}
				else if (k <= 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(k + '0');
				}
				else if (k > 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar('0' + (k / 100));
					_putchar('0' + ((k / 10) % 10));
					_putchar('0' + (k % 10));
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + (k / 10));
					_putchar('0' + (k % 10));
				}
			}

			_putchar('\n');
		}
	}
}

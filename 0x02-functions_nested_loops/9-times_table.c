#include "main.h"
#include <stdio.h>
/**
 * times_table - creates 9x multiplication table
 *
 * Return: always 0
 *
 */
void times_table(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			printf("%d",i * j);
		}

		_putchar('\n');
	}
}

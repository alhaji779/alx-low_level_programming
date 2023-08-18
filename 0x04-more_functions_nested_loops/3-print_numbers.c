#include "main.h"
#include <stdio.h>
/**
 * print_numbers - used to print numbers
 *
 * Return: always 0
 */
void print_numbers(void)
{
	for (i = 0; i < 10; i++)
	{
		_putchar('0' + i);
	}

	_putchar('\n');
}

#include "main.h"
#include <stdio.h>
/**
 * print_numbers - used to print numbers
 *
 * Return: always 0
 */
void print_numbers(void)
{
	char i;

	for (i = '0'; i < '10'; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}

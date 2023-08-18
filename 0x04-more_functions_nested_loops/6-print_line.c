#include "main.h"
/**
 * print_line - prints straight line
 *
 * @n: args
 * Return: void
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

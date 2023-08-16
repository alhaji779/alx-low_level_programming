#include "main.h"
#include "6-abs.c"
/**
 * print_last_digit - prints last digit
 *
 * @c: required int
 *
 * Return: last digit
 */
int print_last_digit(int c)
{
	int x = _abs(c % 10);

	_putchar(x);
	return (x);
}

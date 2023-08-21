#include "main.h"
#include "2-strlen.c"
/**
 * puts_half - prints half part of a number
 * @str: char args
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i;
	int j;

	if (_strlen(str) % 2 != 0)
	{
		j++;
	}
	for (i = (_strlen(str) + j) / 2; i < _strlen(str); i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

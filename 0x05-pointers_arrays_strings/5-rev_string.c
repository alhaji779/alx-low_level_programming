#include "main.h"
#include "strlen.c"
/**
 * rev_string - reverse input strings
 * @s: char args
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i;

	for (i = strlen(s) - 1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}

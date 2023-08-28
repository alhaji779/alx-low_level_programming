#include "main.h"
#include <stdio.h>
/**
 * _strchr - locate char in string
 * @s: string arg
 * @c: character to search
 *
 * Return: char
 */
char *_strchr(char *s, char c)
{
	char *p = s;

	while (*p != '\0')
	{
		if (*p == c)
		{
			return (p);
		}
		p++;
	}

	if (c == '\0')
	{
		return (p);
	}

	return NULL;
}

#include "main.h"
#include <stdbool.h>
#include <stdio.h>
/**
 * _atoi - convert string to int
 * @s: char input
 *
 * Return: integer
 */
int _atoi(char *s)
{
	int res = 0;
	bool is_negative = false;

	if (*s == '-')
	{
		is_negative = true;
		s++;
	}

	while (*s)
	{
		if (*s < '0' || *s > '9')
		{
			return (0);
		}
		res = res * 10 + (*s - '0');
		s++;
	}

	if (is_negative)
	{
		res = -res;
	}

	return (res);
}

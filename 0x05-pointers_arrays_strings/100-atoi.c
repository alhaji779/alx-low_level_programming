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
	bool ns = false;

	while (*s)
	{
		if (*s == '-' && !ns)
		{
			is_negative = true;
			ns = true;
			s++;
			continue;
		}
		if (*s >= '0' && *s <= '9')
		{
			ns = true;
			res = res * 10 + (*s - '0');
		}
		else if (ns)
		{
			break;
		}
		s++;
	}

	if (is_negative)
	{
		res = -res;
	}

	return (res);
}

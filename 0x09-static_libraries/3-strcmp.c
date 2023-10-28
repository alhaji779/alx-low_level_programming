#include "main.h"
/**
 * _strcmp - compares 2 functions
 *
 * @s1: first args
 * @s2: second args
 *
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

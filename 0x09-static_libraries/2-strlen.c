#include "main.h"
/**
 * _strlen - count the len of a str
 * @s: char args
 *
 * Return: 0 or 1
 */
int _strlen(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{}
	return (x);
}

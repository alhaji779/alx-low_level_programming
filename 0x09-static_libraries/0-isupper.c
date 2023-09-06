#include "main.h"
/**
 * _isupper - prints out uper case
 * @c: char args
 *
 * Return: always 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}

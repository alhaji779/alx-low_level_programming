#include "main.h"
/**
 * cap_string - capitalize string
 * @str: args
 *
 * Return: character
 */
char *cap_string(char *str)
{
	int cap = 1;

	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			cap = 1;
		}
		else if (cap && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - ('a' - 'A');
			cap = 0;
		}
		else
		{
			cap = 0;
		}
	}

	return (str);
}

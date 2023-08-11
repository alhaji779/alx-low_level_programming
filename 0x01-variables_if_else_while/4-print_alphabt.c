#include <stdio.h>
/**
 * main - Entry point
 *
 * Program to list alphabeths except specified letters
 *
 * Return: always 0
 */
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		if (( a != 'e') && (a != 'q'))
		{
			putchar(a);
		}
		a++;
	}
	putchar('\n');

	return (0);
}

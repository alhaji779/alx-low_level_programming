#include <stdio.h>
/**
 * main - Entry point
 *
 * Program to display alphabeths in upper and lower case
 *
 * Return: always 0
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		putchar(a);
	for (a = 'A'; a <= 'Z'; a++)
		putchar(a);
	putchar('\n');

	return (0);
}

#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always returns 0
 *
 */
int main(void)
{
	char a = 'z';

	for (; a >= 'a'; a--)
		putchar(a);
	putchar('\n');

	return (0);
}

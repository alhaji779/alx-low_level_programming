#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always equals 0
 *
 */
int main(void)
{
	int n = '0';
	int a = 'a';

	for (; n <= '9'; n++)
		putchar(n);
	for (; a <= 'f'; a++)
		putchar(a);
	putchar('\n');

	return (0);
}

#include <stdio.h>
/**
 * main - Entry point
 *
 * Program to list single digits
 *
 * Return: always equals 0
 *
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
		putchar('0' + a);
	putchar('\n');

	return (0);
}

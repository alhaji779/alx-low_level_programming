#include "main.h"
/**
 * jack_bauer - 24 hours countdown
 *
 * Return: always 0
 */
void jack_bauer(void)
{
	int i = 0;
	int j;

	while (i <= 23)
	{
		for (j = 0; j <= 59; j++)
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			_putchar(':');
			_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
			_putchar('\n');
		}
		i++;
	}
}

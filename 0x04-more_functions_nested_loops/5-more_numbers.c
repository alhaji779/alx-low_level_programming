#include "main.h"
/**
 * more_numbers - prints numbers multiple times
 *
 * Return: void
 */
void more_numbers(void)
{
	int i;
	int h;

	for (h = 0; h <= 9; h++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i > 9)
			{
				_putchar(i / 10 + '0');
			}
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}

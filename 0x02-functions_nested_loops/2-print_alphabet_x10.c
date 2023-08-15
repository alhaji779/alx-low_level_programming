#include "main.h"
/**
 * print_alphabet_x10 - prints lowercase alphabets 10 times
 *
 * Return: always 0
 *
 */
void print_alphabet_x10(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		for (int i = 1; i <= 10; i++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}

}

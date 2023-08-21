#include <unistd.h>
/**
 * _putchar - prints to output
 * @c: The character args
 *
 * Return: character
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

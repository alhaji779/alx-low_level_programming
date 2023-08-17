#include <unistd.h>
/**
 * _putchar - prints out to output
 * @c: The character to print
 *
 * Return: On success 1.
 *
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

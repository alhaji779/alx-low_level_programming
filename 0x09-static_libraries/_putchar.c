#include <unistd.h>
/**
 * _putchar - prints a character to output
 * @c: The char args
 *
 * Return: 0 or 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

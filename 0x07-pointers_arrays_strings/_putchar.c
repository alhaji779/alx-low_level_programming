#include <unistd.h>
/**
 * _putchar - write char to output
 * @c: args
 *
 * Return: always 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

#include <unistd.h>
/**
 * This function will print to output
 *
 * Returns 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

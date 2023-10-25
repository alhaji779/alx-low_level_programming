#include "main.h"
/**
 * factorial - calc factorial
 * @n: number arg
 * Return: returns factor or error
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n > 0)
		return (n * factorial(n - 1));
	return (1);
}

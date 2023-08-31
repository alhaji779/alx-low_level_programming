#include "main.h"
/**
 * helper - sub-function
 * @i: int args
 * @n: integer
 * Return: 0 or 1
 */
int helper(int i, int n)
{
	if (n % i == 0 && n != i)
		return (0);
	if (n % i != 0 && i < n)
		return (helper(i + 1, n));
	return (1);
}
/**
 * is_prime_number - is prime or not
 * @n: integer args
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n < 2)
		return (0);
	return (helper(i, n));
}

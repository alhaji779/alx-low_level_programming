#include "main.h"
/**
 * checker - checker function
 * @i: int
 * @k: integer args
 * Return: int
 */
int checker(int i, int k)
{
	if (k % i == 0 && k != i)
		return (0);
	if (k % i != 0 && i < k)
		return (checker(i + 1, k));
	return (1);
}
/**
 * is_prime_number - check if its prime
 * @n: integer
 * Return: int
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n < 2)
		return (0);
	return (checker(i, n));
}

#include "main.h"

/**
 * checker - checker function
 * @i: integer arg
 * @n: root
 * Return: int
 */
int checker(int i, int n)
{
	int x;

	if (i * i != n)
	{
		if (i > n)
		{
			return (-1);
		}
		x = checker(i + 1, n);
		return (x + 1);
	}
	return (0);
}
/**
 * _sqrt_recursion - returns square root
 * @n: integer arg
 * Return: squareroot
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	if (checker(i, n) == n && n != 1)
		return (-1);
	return (checker(i, n));

}

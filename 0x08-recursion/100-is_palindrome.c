#include "main.h"
/**
 * checker1 - checker function1
 * @s: string
 * Return: int
 */
int checker1(char *s)
{
	int i = 0;

	if (*s)
	{
		i = i + checker1(s + 1);
		return (i += 1);
	}
	return (0);
}
/**
 * checker2 - checker function2
 * @i: int args
 * @f: string
 * Return: int
 */
int checker2(int i, char *f)
{
	if (*f)
	{
		if (*f != f[checker1(f) - i])
		{
			return (0);
		}
		else
		{
			return (checker2(i + 1, f + 1));
		}
	}
	return (1);
}
/**
 * is_palindrome - palindrome function
 * @s: string args
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	int i = 1;

	return (checker2(i, s));

}

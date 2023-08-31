#include "main.h"
/**
 * length - helper functon
 * @s: string
 * Return: string length
 */
int length(char *s)
{
	int i = 0;

	if (*s)
	{
		i = i + length(s + 1);
		return (i += 1);
	}
	return (0);
}
/**
 * helper2 - another helper function
 * @i: integer i
 * @s: string
 * Return: int value
 */
int helper2(int i, char *s)
{
	if (*s)
	{
		if (*s != s[length(s) - i])
		{
			return (0);
		}
		else
		{
			return (helper2(i + 1, s + 1));
		}
	}
	return (1);
}
/**
 * is_palindrome - is it paldindrome
 * @s: string to check
 * Return: 0 or 1
 */
int is_palindrome(char *s)
{
	int i = 1;

	return (helper2(i, s));

}

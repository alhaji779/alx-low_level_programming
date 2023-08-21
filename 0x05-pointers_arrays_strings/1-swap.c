#include "main.h"
/**
 * swap_int - function to swap numbers
 * @a: int args
 * @b: second args
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int x = *a;
	int y = *b;
	*a = y;
	*b = x;
}

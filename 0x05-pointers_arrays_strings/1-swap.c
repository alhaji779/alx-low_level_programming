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
	*a = b;
	*b = a;
}

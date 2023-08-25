#include "main.h"
/**
 * reverse_array - reverse an array
 * @a: first args
 * @n: number of elements to swap
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;
	int k;

	while (i < j)
	{
		k = a[i];
		a[i] = a[j];
		a[j] = k;

		i++;
		j--;
	}
}

#include "search_algos.h"
/**
 * linear_search - linear algorithm
 * @array: array
 * @size: size of array
 * @value: value to search
 * Return: int value
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}

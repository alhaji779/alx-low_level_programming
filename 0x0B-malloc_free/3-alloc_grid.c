#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - function to create 2x2 matrix
 * @width: width of array
 * @height: height of array
 * Return: pointer of new grid
 */
int **alloc_grid(int width, int height)
{
	int **ptrArry;
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptrArry = (int **)malloc(sizeof(int *) * height);
	if (ptrArry == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ptrArry[i] = (int *)malloc(sizeof(int) * width);
		if (ptrArry[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(ptrArry[j]);
			}
			free(ptrArry);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			ptrArry[i][j] = 0;

	return (ptrArry);
}

#include "main.h"
/**
 * print_diagsums - sum diagonals of matrix
 * @a: char args
 * @size: second args
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int mDiag;
	int sumDiag;

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (i == j)
			{
				mDiag += a[i * size + j];
			}
			if ((i + j) == size - 1)
			{
				sumDiag += a[i * size + j];
			}
		}
	}
	printf("%d, %d\n", mDiag, sumDiag);
}

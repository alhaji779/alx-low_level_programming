#include "main.h"
#include <stdio.h>
/**
 * main - actual function
 *
 * Return: null
 *
 */
int main(void)
{
	int x = 2;

	float a = 1;
	float b = a + 1;
	float c = a + b;

	printf(".0f, ", a);
	printf(".0f, ", b);
	while (x < 98)
	{
		x++;
		printf("%.0f", c);
		a = b;
		b = c;
		c = a + b;
		if (x < 98)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}

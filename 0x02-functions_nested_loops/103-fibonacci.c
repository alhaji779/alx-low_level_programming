#include <stdio.h>
/**
 * main - actual function
 *
 * Return: always 0
 */
int main(void)
{
	unsigned long a = 0, b = 1, sum;
	float final_sum;

	while (1)
	{
		sum = a + b;
		if (sum > 4000000)
			break;

		if ((sum % 2) == 0)
			final_sum += sum;

		a = b;
		b = sum;
	}
	printf("%.0f\n", sum);

	return (0);
}

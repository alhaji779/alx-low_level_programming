#include "variadic_functions.h"

/**
 * print_numbers - function to print numbers
 * @separator: first args
 * @n: count of inputs
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list mlist;

	va_start(mlist, n);
	for (i = 0; i < n; i++)
	{
		if (i > 0 && separator != NULL)
			printf("%s", separator);
		printf("%d", va_arg(mlist, int));
	}
	va_end(mlist);
	printf("\n");
}

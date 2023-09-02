#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/**
 * is_positive - helper function
 * @str: arg
 * Return: True or False
 */
bool is_positive(const char *str)
{
	int i;

    	for (i = 0; str[i] != '\0'; i++)
    	{
        	if (str[i] < '0' || str[i] > '9')
		{
            	return false;
        	}
    	}
    	return true;
}

/**
 * main - main function
 * @argc: argument count
 * @argv: vector of arguments
 * Return: 1
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc < 1)
	{
		printf("%d\n", 0);
		return (1);
	}
	else
	{
		for (i = 0; i < argc; i++)
		{
			if (is_positive(argv[i]))
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
		return (0);
	}
}

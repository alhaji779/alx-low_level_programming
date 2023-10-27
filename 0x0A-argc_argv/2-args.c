#include <stdio.h>
#define UNUSED(x) (void)(x)
/**
 * main - main
 * @argc: argc
 * @argv: vector of arguments
 *Return: int
 */
int main(int argc, char  *argv[])
{
	int k;

	for (k = 0; k < argc; k++)
	{
		printf("%s\n", argv[k]);
	}
	return (0);
}

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
	UNUSED(argv);
	printf("%d\n", argc - 1);
	return (0);
}

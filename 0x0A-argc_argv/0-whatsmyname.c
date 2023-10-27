#include <stdio.h>
#define UNUSED(x) (void)(x)
/**
 * main - main
 * @argc: argc
 * @argv: vector of arguments
 *Return: int
 */
int main(int argc, char *argv[])
{
	UNUSED(argc);
	printf("%s\n", argv[0]);
	return (0);
}

#include <stdio.h>

/**
 * main - starting point
 * @argc: number of arguments
 * @argv: arguments for the function
 *
 * Return: always 0.
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}

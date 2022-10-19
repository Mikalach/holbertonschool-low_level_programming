#include <stdio.h>
/**
 *main - print all arguments received
 *@argc: number of command line
 *@argv: array containing command line
 *Return: 0 if working
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

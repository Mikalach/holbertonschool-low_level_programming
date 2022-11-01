#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 *
 */

int main(int argc, char **argv)

{
	int oper;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (get_op_func(argv[2]) == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);

	if ((argv[2][0] == '/' || argv[2][0] == '%') && atoi(argv[3]))
	{
		printf("Error\n");
		exit(100);
	}

	oper = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));

	printf("%d\n", oper);
	return (0);

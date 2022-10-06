#include "main.h"

/**
 * print_line - Print the given number of underscore
 * @n: Number times
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		i = 0;
		while (i < n)
		{
			_putchar('_');
			i++;
		}
	}
	{
		_putchar('\n');
	}
}

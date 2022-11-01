#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *print_numbers - print numbers followed by a string
 *@n: number of arguments
 *@separator: the string to print betwen numbers
 *Return: NULL
 */

void print_numbers(const char *separator, const unsigned int n, ...)

{
	unsigned int i;
	int list = 0;
	va_list aptr;

	if (n == 0)
		return;

	va_start(aptr, n);

	for (i = 0; i < n; i++)
	{
		list = va_arg(aptr, int);

		if (i == (n - 1))
			printf("%d\n", list)

		else if (*separator == '\0')
			printf("%d", list);

		else
			printf("%d%s", list, separator);
	}
	va_end(aptr);
}

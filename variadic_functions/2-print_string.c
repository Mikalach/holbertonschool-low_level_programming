#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *ptr;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		ptr = va_arg(list, char*);
		if (str != NULL)
			printf("%s", ptr);
		else
			printf("(nil)");
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(list);
	printf("\n");
}

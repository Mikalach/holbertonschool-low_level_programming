#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 *print_char - print a character
 *@c: character to print
 *Return: nothing
 */

void print_char(va_list vaptr)
{
	printf("%c", va_arg(c, int));
}

/**
 *print_int - print a integer
 *@i: int to print
 *Return: nothing
 */

void print_int(va_list vaptr)
{
	printf("%d", va_arg(i, int));
}

/**
 *print_float - print a float number
 *@f: float to print
 *Return: nothing
 */
void print_float(va_list vaptr)
{
	printf("%f", va_arg(f, double));
}

/**
 *print_str - print a string
 *@s: character to print
 *Return: nothing
 */

void print_str(va_list  vaptr)
{
	char *s = va_arg(vaptr, char *);

	if (!s)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
 *print_all - print all the argument passed to function
 *@format: format to be picked and printed
 *Return: nothing
 */

void print_all(const char * const format, ...)
{
	ft types[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_str},
		{'\0', NULL}
	};
	va_list list;
	int i = 0;
	int j = 0;

	va_start(vaptr, format);
	while (format != NULL && format[i])
	{
		while (j < 4)
		{
			if (format[i] == types[j].ch)
			{
				fc = types[j].func;
				fc(list);
				if (format[i + 1] != '\0')
					printf(", ");
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(list);
}

#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers between n and 98
 *
 * @n: the given natural number
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (n = n; n <= 97; n++)
			printf("%d, ", n);
	}
	else
		for (n = n; n >= 98; n--)
			printf("%d, ", n);
}

#include <stdarg.h>

/**
 *sum_them_all - make the sum of all the given int inside n
 *@n: the number of arg in the functuin
 *Return: 0 if n is null or the sum of the given numbers
 */

int sum_them_all(const unsigned int n, ...)

{

	unsigned int i;
	int sum = 0;
	va_list aptr;

	if (n == 0)
		return (0);

	va_start (aptr, n);

	for (i = 0; i < n; i++)
		sum += va_arg(aptr, int);

	va_end(aptr);

	return (sum);

}

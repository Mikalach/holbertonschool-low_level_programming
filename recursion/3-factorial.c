#include "main.h"

/**
 * factorial - return factorial of the given number
 * @n: the given number
 *
 * Return: Factorial of the givne number or -1 if n is negative
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (!n)
		return (1);
	return (n * factorial(n - 1));
}

#include "main.h"

/**
 *_pow_recursion - return the value of x rasied to the power of y
 *@x: the given number to raise by power of y
 *@y: the given number used to raise x
 *Return: the value of x to the power of y or -1 if y is negative
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}

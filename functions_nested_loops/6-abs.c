#include <stdio.h>
#include "main.h"
/**
 * _abs - this should give the absolute value of a given integer
 *
 * @n: the given integer
 *
 * Return: the absolute value of the given integer
 *
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}

	else
	{
		return (-n);
	}
}

#include <stdio.h>
#include "main.h"
 /**
 * _abs - computes the absolute value of an integrer
 *
 * @n: the given integer
 *
 * Return the absolute value of the given integer
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

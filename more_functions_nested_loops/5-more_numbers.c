#include "main.h"

/**
 * more_numbers - print numbers from 0 to 14 ten times
 */

void more_numbers(void)
{
	m = 0;

	int m, n;

	while (m <= 10)

	{
		n = 0;
		while (n < 14)
		{
			_putchar(n + '0');
			n++;
		}
		_putchar('\n');
		m++;
	}
}

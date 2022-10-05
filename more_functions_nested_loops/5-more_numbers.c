#include "main.h"

/**
 * more_numbers - print numbers from 0 to 14 ten times
 */

void more_numbers(void)
{
	int m, n;

	m = 0;

	while (m < 10)
	{
		n = 0;
		while (n < 15)
		{
			if (n > 9)
			{
				_putchar((n / 10) + '0');
			}
			_putchar((n % 10) + '0');
			n++;
		}
		_putchar('\n');
		m++;
	}
}

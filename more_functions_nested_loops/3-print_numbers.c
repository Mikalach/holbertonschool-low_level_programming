#include "main.h"
/**
 *print_numbers - print numbers from 0 to 9
 *Return: Allways 0.
 */
void print_numbers(void)
{
	int n;

	n = 0;

	if (n < 9)
	{
		_putchar(n + '0');
		n++;
	}
	_putchar('\n');
	return (0);
}

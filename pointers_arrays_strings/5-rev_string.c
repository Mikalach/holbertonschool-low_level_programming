#include "main.h"
/**
 *print_rev - prints a string in reverse from the orignal
 *@s: String to print in reverse
 */

void print_rev(char *s)

{
	int x;

	x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	while (x != 0)
	{
		x--;
		_putchar(s[x]);
	}
	_putchar('\n');
}

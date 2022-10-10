#include "main.h"

/**
 * puts2 - print every other character starting from the 1st
 * @str: string
 * Return: 0
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i = i + 2)
	{
		if (i == 0)
		{
			_putchar(str[i]);
		}
		else if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}

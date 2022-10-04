#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 *
 * Return: 0 = success
 */
void jack_bauer(void)
{
	int h, m;
	h = 0;
	while (h < 24)
	{
		m = 0;
		_putchar(h / 10);
		_putchar(h % 10);
		_putchar(':');
		_putchar(m / 10);
		_putchar(m % 10);
		_putchar('\n');
		m++;
	}
	h++;
}

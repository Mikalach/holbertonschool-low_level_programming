#include <stdio.h>

/**
 * main- entry point
 * @void: Null value
 *
 * Return: Zero value
 */

int main(void)
{
char c, b;
for (c = 'a'; c <= 'z'; c++)
putchar(c);
for (b = 'A'; b <= 'Z'; b++)
putchar(b);
putchar('\n');
return (0);
}

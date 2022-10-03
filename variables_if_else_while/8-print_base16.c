#include <stdio.h>

/**
 * main- Hexadecimal from 0 to F
 * @void: Null value
 *
 * Return: Zero value for success
 */

int main(void)
{
char c;
int n;

for (n = '0'; n <= '9'; n++)
putchar(n);
for (c = 'a'; c <= 'f'; c++)
putchar(c);
putchar('\n');
return (0);
}

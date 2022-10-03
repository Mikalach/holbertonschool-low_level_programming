#include <stdio.h>
/**
 * main- count to 9 with comas and space
 * @void: Null value
 *
 * Return: Zero value
 */

int main(void)
{
int n;

for (n = '0'; n <= '9'; n++)
{
putchar(n);
}	  
if (n != '9')
{
putchar(',');
putchar(' ');
}
else
{
putchar('\n');
}
return (0);
}

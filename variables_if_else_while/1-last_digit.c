#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - digit checker
* @void: Null value
*
* Return: Zero value to succesful
*/

int main(void)
{

if (n % 10 == 0)
{
printf("Last digit of %d is %d and is 0\n", n, n % 10);
}

else if (n % 10 > 5)
{
printf("Last digit of %d is %d and is greater than 5 and not 0\n" n, n % 10);
}

else if (n % 10 < 6)
{
printf("Last digit of %d is %d and is less than 5 and not 0\n" n, n % 10);
}

return (0);
}
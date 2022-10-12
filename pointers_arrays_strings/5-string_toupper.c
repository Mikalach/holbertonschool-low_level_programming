#include "main.h"

/**
 *string_toupper - change all the lowercase letter in a string to uppercases
 *@n : given string
 *Return: pointer of the string
 */

char *string_toupper(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 97 && n[i] <= 122)
		{
			n[i] = n[i] - 32;
		}
	}
	return (n);
}

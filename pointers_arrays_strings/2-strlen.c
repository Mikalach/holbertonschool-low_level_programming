#include "main.h"
/**
 * _strlen - return the lenght of a given string
 * @s: string
 *
 * Return: lenght of the given string
 */

int _strlen(char *s)
{
	int a;

	a = 0;
	while (*s =! '\0')
	{
		*s++;
		a++;
	}
	return(a);
}

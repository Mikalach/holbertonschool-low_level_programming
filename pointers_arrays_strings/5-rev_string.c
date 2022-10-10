#include "main.h"
/**
 * _strlen - return the lenght of a given string
 * @s: 
 * Return: lenght of the given string
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s++)
		i++;
	return (i);
}
/**
 *rev_string - prints a string in reverse from the orignal
 *@s: String to print in reverse
 * Return: 0
 */

void rev_string(char *s)
{
	int i, len, tmp;

	len = _strlen(s) - 1;
	for (i = 0; i < (len / 2); i++)
	{
		tmp = s[i];
		s[i] = s[len - i];
		s[len - i] = tmp;
	}
}

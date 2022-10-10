#include "main.h"
/**
 *print_rev - prints a string in reverse from the orignal
 *@s: String to print in reverse
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s++)
		i++;
	return (i);
}
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

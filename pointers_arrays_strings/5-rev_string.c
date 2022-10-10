#include "main.h"
/**
 *print_rev - prints a string in reverse from the orignal
 *@s: String to print in reverse
 */

void rev_string(char *s)
{
	{
		int i = 0;

		while (*s++)
			i++;
	}
	{
		int a, len, tmp;
		len = i(s) - 1;
		for (a = 0; a < (len / 2); a++)
		{
			tmp = s[a];
			s[a] = s[len - a];
			s[len - a] = tmp;
		}
	}
}

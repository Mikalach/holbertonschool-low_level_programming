#include "main.h"

/**
 * leet - change the aeotl into numbers
 * @s: string being converted into 1337
 *
 * Return: changed string
 */
char *leet(char *s)
{
	int i, j;
	char letter[] = "AaEeOoTtLl";
	char number[] = "4433007711";

	for (i = 0; s[i]; i++)
		for (j = 0; letter[j]; j++)
			if (letter[j] == s[i])
				s[i] = number[j];
	return (s);
}

#include "main.h"

/**
 * _strcmp - compares two given strings
 * @s1: first string being checked
 * @s2: Second string being checked
 *
 * Return: Difference between string characters being evaluated
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		++i;
	return (s1[i] - s2[i]);
}

#include "main.h"

/**
 * _strncpy - Copies a string
 * @dest: Array used to copy
 * @src: the given string being copied
 * @n: length of string to be copied
 *
 * Return: the copy of the given string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && src[x] != '\0'; x++)
		dest[x] = src[x];
	while (x < n)
		dest[x++] = '\0';
	return (dest);
}

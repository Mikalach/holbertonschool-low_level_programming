#include "main.h"

/**
 * _strcpy - copy a string inside an array pointed by src
 * @dest: the array
 * @src: the string to be copied
 *
 * Return: \0
 */
char *_strcpy(char *dest, char *src)

{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

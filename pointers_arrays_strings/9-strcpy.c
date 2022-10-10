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
	int i = 0;

	while (*src++)
		i++;
	for (i = 0; i != '\0'; i++)
		dest[i] = src[i];
	return (dest);
}

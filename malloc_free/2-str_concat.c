#include <stdlib.h>
/**
 *str_concat - function that concatenate 2 strings using malloc
 *@s1: first string
 *@s2: second string
 *Return: the pointer to the 2 strings concatenated
 */
char *str_concat(char *s1, char *s2)
{
	char *z;
	int i = 0, j = 0, k = 0, l = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
	{
		++i;
	}
	while (s2[j] != '\0')
	{
		++j;
	}
	z = malloc(sizeof(char) * (i + j) + 1);
	if (z == NULL)
		return (NULL);
	while (k < i)
	{
		z[k] = s1[k];
		k++;
	}
	while (l < j)
	{
		z[k] = s2[l];
		k++;
		l++;
	}
	return (z);
}

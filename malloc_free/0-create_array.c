#include <stdlib.h>
/**
 *create_array - function that create an array of given size
 *@size: size of the array to be created
 *@c: character to put in the array
 *Return: NULL or char
*/
char *create_array(unsigned int size, char c)

{
	char *z;
	unsigned int i;

	if (size == 0)

	{
		return (NULL);
	}

	z = malloc(size * sizeof(char));

	if (z == NULL)

	{
		return (NULL);
	}

	for (i = 0; i < size; i++)

	{
		z[i] = c;
	}
	return (z);
}

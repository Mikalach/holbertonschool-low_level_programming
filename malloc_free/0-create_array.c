#include <stdlib.h>

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

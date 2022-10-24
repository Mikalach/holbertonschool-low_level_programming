#include <stdlib.h>

char *create_array(unsigned int size, char c)

{
	char *c;
	unsigned int i;

	if (size == 0)

	{
			  return (NULL);
	}

	c = malloc(size*sizeof(char));

	if (c == NULL)

	{
		return (NULL);
	}

	for (i = 0; i < size; i++)

	{
		c[i] = c;
	}
	return (c);
}

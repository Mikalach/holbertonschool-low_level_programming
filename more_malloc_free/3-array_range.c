#include <stdlib.h>
#include "main.h"

/**
 *array_range - create an array of integer
 *@min: minimum value
 *@max: maximum value
 *Return: pointer to the created array
 */

int *array_range(int min, int max)
{
	int *p;
	int i = 0, j = 0;

	if (min > max)
		return (NULL);

	p = malloc(sizeof(int) * (max - min));
	if (p == NULL)
		return (NULL);
	while (i <= max)
	{
		p[k] = i;
		i++, k++;
	}
	return (p);
}

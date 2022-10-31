#include "function_pointers.h"

/**
 *int_index - Searches for an integer
 *@array: pointer to given array
 *@size: Size of givenarray
 *@cmp: pointer to function to use
 *Return: -1 of no match or the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (size <= 0)
		return (-1);
	if (array && cmp)
	{
		for (x = 0; x < size; ++x)
			if (cmp(array[x]))
				return (x);
	}
	return (-1);
}

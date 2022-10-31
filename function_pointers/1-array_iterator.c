#include "function_pointers.h"

/**
 *array_iterator - excutes function as parameter on each array's element
 *@array: pointer to the given array
 *@size: size of the given array
 *@action: pointer to function to use
 *Return: voidi
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t n;

	if (array && size && action)
		for (n = 0; n < size; n++)
			action(array[n]);
}

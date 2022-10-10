#include "main.h"
/**
 * swap_int - Swap the integers values of 2 variables
 * @a: first value
 * @b: second value
 */

void swap_int(int *a, int *b)

{
	int keep;
	
	keep = *a;
	*a = *b;
	*b = keep;
}

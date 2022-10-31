#include "function_pointers.h"

/**
 * print_name - print the given name
 * @name: given name
 * @f: function pointer
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != '\0')
		return;
	f(name);
}

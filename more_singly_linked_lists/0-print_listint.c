#include "lists.h"

/**
 *print_listint - print all the element of an int list
 *@h: the pointer to the list
 *Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;
	int n = 0;

	while (h)
	{
		n = *h;
		printf("%d\n", n);
		h = h->next;
		++i;
	}
	return (i);
}

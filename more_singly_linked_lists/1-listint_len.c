#include "lists.h"

/**
 *listint_len - print all the element of an int list
 *@h: the pointer to the list
 *Return: the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%ld\n", i);
		h = h->next;
		++i;
	}
	return (i);
}

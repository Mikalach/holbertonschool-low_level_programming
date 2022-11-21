#include "lists.h"

/**
 *dlistint_len - print all the element of an int list
 *@h: the pointer to the list
 *Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		++i;
	}
	return (i);
}

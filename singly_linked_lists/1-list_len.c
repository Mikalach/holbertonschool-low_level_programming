#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 *list_len - function that return the number of element
 *@Return: the number of elements
 *@h: pointer to the nodes
 */


size_t list_len(const list_t *h)
{
	int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
